#ts is stats file 
import math


def z_test(x_bar, mu_0, sigma, n):
    se = sigma / math.sqrt(n)
    z = (x_bar - mu_0) / se

    print("Z-Test")
    print(f"Sample mean (x̄): {x_bar}")
    print(f"Hypothesized mean (μ₀): {mu_0}")
    print(f"Population SD (σ): {sigma}")
    print(f"Sample size (n): {n}")
    print(f"Standard Error: {se:.3f}")
    print(f"Z-statistic: {z:.3f}")


def t_test(x_bar, mu_0, s, n):
    se = s / math.sqrt(n)
    t = (x_bar - mu_0) / se
    df = n - 1

    print("\nT-Test")
    print(f"Sample mean (x̄): {x_bar}")
    print(f"Hypothesized mean (μ₀): {mu_0}")
    print(f"Sample SD (S): {s}")
    print(f"Sample size (n): {n}")
    print(f"Standard Error: {se:.3f}")
    print(f"t-statistic: {t:.3f}")
    print(f"Degrees of freedom: {df}")


# Example
z_test(x_bar=104, mu_0=100, sigma=16, n=64)

t_test(x_bar=104, mu_0=100, s=16, n=64)