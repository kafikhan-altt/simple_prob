# two_sample_ttest.py

import math


def two_sample_t_test(x_bar1, x_bar2, s1, s2, n1, n2):
    """
    Welch's two-sample t-test.
    Used when comparing the means of two independent groups.
    """

    se = math.sqrt((s1**2 / n1) + (s2**2 / n2))

    t = (x_bar1 - x_bar2) / se

    # Welch-Satterthwaite degrees of freedom
    numerator = (s1**2 / n1 + s2**2 / n2) ** 2

    denominator = (
        (s1**2 / n1) ** 2 / (n1 - 1)
        + (s2**2 / n2) ** 2 / (n2 - 1)
    )

    df = numerator / denominator

    print("Two-Sample Welch t-Test")
    print("-----------------------")
    print(f"Group 1 mean: {x_bar1}")
    print(f"Group 2 mean: {x_bar2}")
    print(f"Group 1 SD: {s1}")
    print(f"Group 2 SD: {s2}")
    print(f"Group 1 n: {n1}")
    print(f"Group 2 n: {n2}")
    print(f"Standard Error: {se:.3f}")
    print(f"t-statistic: {t:.3f}")
    print(f"Degrees of freedom: {df:.2f}")


# Example
two_sample_t_test(
    x_bar1=85,
    x_bar2=80,
    s1=6,
    s2=5,
    n1=20,
    n2=25
)