
import math


def one_sample_t_test(x_bar, mu_0, s, n, t_critical):
    se = s / math.sqrt(n)
    t = (x_bar - mu_0) / se
    df = n - 1

    print("One-Sample t-Test")
    print("------------------")
    print(f"Sample mean (x̄): {x_bar}")
    print(f"Hypothesized mean (μ₀): {mu_0}")
    print(f"Sample SD (S): {s}")
    print(f"Sample size (n): {n}")
    print(f"Standard Error: {se:.3f}")
    print(f"t-statistic: {t:.3f}")
    print(f"Degrees of freedom: {df}")

    if abs(t) > t_critical:
        print("Decision: Reject H₀")
    else:
        print("Decision: Fail to reject H₀")


# Example
# df = 9, two-tailed 5% critical value ≈ 2.262
one_sample_t_test(
    x_bar=104,
    mu_0=100,
    s=8,
    n=10,
    t_critical=2.262
)