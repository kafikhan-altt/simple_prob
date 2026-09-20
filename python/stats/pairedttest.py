
import math


def paired_t_test(before, after, t_critical):
    if len(before) != len(after):
        raise ValueError("Both samples must have the same length.")

    n = len(before)

    # Differences
    differences = [a - b for a, b in zip(after, before)]

    mean_d = sum(differences) / n

    # Sample standard deviation of differences
    s_d = math.sqrt(
        sum((d - mean_d) ** 2 for d in differences) / (n - 1)
    )

    se = s_d / math.sqrt(n)
    t = mean_d / se
    df = n - 1

    print("Paired t-Test")
    print("-------------")
    print(f"Mean difference (D̄): {mean_d:.3f}")
    print(f"SD of differences (S_D): {s_d:.3f}")
    print(f"Standard Error: {se:.3f}")
    print(f"t-statistic: {t:.3f}")
    print(f"Degrees of freedom: {df}")

    if abs(t) > t_critical:
        print("Decision: Reject H₀")
    else:
        print("Decision: Fail to reject H₀")


# Example: before vs after measurements
before = [80, 75, 90, 85, 70]
after = [85, 78, 95, 88, 74]

# df = 4, two-tailed 5% critical value ≈ 2.776
paired_t_test(before, after, t_critical=2.776)