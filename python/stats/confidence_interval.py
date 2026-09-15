# confidence_interval.py

import math


def mean_ci(x_bar, sigma, n, z=1.96):
    """
    Confidence interval for a population mean
    when population SD (sigma) is known.
    """

    se = sigma / math.sqrt(n)
    margin = z * se

    lower = x_bar - margin
    upper = x_bar + margin

    print("95% Confidence Interval")
    print("-----------------------")
    print(f"Sample mean (x̄): {x_bar}")
    print(f"Population SD (σ): {sigma}")
    print(f"Sample size (n): {n}")
    print(f"Standard Error: {se:.3f}")
    print(f"Margin of Error: {margin:.3f}")
    print(f"CI: ({lower:.3f}, {upper:.3f})")


# Example
mean_ci(
    x_bar=104,
    sigma=16,
    n=64
)