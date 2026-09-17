# bayesian_beta.py

def beta_posterior(alpha, beta, successes, trials):
    failures = trials - successes

    posterior_alpha = alpha + successes
    posterior_beta = beta + failures

    mean = posterior_alpha / (posterior_alpha + posterior_beta)

    print("Bayesian Beta-Binomial")
    print("---------------------")
    print(f"Prior: Beta({alpha}, {beta})")
    print(f"Successes: {successes}")
    print(f"Trials: {trials}")
    print(f"Posterior: Beta({posterior_alpha}, {posterior_beta})")
    print(f"Posterior mean: {mean:.3f}")


# Example
beta_posterior(
    alpha=2,
    beta=3,
    successes=7,
    trials=10
)