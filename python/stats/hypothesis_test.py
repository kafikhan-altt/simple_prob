import math


def one_sample_z_test(x_bar, mu_0, sigma, n, alpha=0.05):
    se = sigma / math.sqrt(n)
    z = (x_bar - mu_0) / se

    # Two-tailed critical value for alpha = 0.05
    critical = 1.96

    print("One-Sample Z-Test")
    print("-----------------")
    print(f"Sample mean (x̄): {x_bar}")
    print(f"Hypothesized mean (μ₀): {mu_0}")
    print(f"Population SD (σ): {sigma}")
    print(f"Sample size (n): {n}")
    print(f"Standard Error: {se:.3f}")
    print(f"Z-statistic: {z:.3f}")

    if abs(z) > critical:
        print("Decision: Reject H₀")
    else:
        print("Decision: Fail to reject H₀")


# Example
one_sample_z_test(
    x_bar=104,
    mu_0=100,
    sigma=16,
    n=64
)