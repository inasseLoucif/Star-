# Comparatif des coûts Cloud – Infrastructures 1, 2 et 3 (Prix en USD, HT, mensuel)

Les coûts ci-dessous sont exprimés en dollars US (USD), hors taxes, selon une périodicité mensuelle.
Aucune licence n’est incluse (Windows, SQL Server…), aucun plan d’économie (Saving Plans, Spot, Commitment) n’est appliqué.
La région privilégiée est France (Paris) ou, à défaut, Europe.

Tous les calculs mensuels sont basés sur 720 heures/mois.
Conversions EUR → USD réalisées au taux 1 EUR = 1,15.

---

## Infrastructure n°1

1 serveur : 16 Go RAM, 4 vCPU, 100 Go stockage

### AWS

Instance t3.xlarge : 0,1664 USD/h → 119,81 USD/mois
Stockage gp3 : 0,08 USD/Go → 8 USD
**Total : 127,81 USD/mois**
*Source : [AWS Pricing Calculator](https://calculator.aws/#/)*

### GCP

VM e2-standard-4 : 0,134 USD/h → 96,48 USD/mois
Stockage persistant : 0,10 USD/Go → 10 USD
**Total : 106,48 USD/mois**
*Source : [Google Cloud Pricing Calculator](https://cloud.google.com/products/calculator)*

### Azure

VM D4s_v4 : 0,192 USD/h → 138,24 USD/mois
Stockage SSD : 0,08 USD/Go → 8 USD
**Total : 146,24 USD/mois**
*Source : [Azure Pricing Calculator](https://azure.microsoft.com/en-us/pricing/calculator/)*

### Scaleway

VM PRO2-XS : 0,11 €/h → 0,1265 USD/h × 720 h = 91,08 USD/mois
Stockage bloc : 0,11 €/Go → 12,65 USD
**Total : 103,73 USD/mois**
*Source : [Scaleway Pricing](https://www.scaleway.com/en/pricing/)*

### OVH

VM équivalente : 0,145 USD/h × 720 h = 104,4 USD
Stockage 100 Go SSD : 0,12 USD/Go → 12 USD
**Total : 116,4 USD/mois**
*Source : [OVH Public Cloud Pricing](https://www.ovhcloud.com/en/public-cloud/prices/)*

### Comparaison

Scaleway (103,73 USD) — le moins cher
OVH (116,4 USD)
GCP (106,48 USD)
AWS (127,81 USD)
Azure (146,24 USD) — le plus cher

---

## Infrastructure n°2

6 serveurs : 6 Go RAM, 3 vCPU, 20 Go stockage
3 serveurs arrêtés 8h/jour (–33 %)

### AWS

VM t3.medium : 0,0416 USD/h × 720 h = 29,95 USD/mois
6 VMs : 29,95 × 6 = 179,7 USD
Stockage 120 Go : 0,08 USD/Go × 120 Go = 9,6 USD
Économie sur 3 VMs arrêtées 8h/j : –29,8 USD
**Total ajusté : 159,5 USD/mois**
*Source : [AWS Pricing Calculator](https://calculator.aws/#/)*

### GCP

VM e2-medium : 0,067 USD/h × 720 h = 48,24 USD
6 VMs : 289,44 USD, ajustement arrêt 3 VMs (–33 %) = –47,76 USD
Stockage 6×20 Go = 120 Go × 0,10 USD = 12 USD
**Total : 253,68 USD/mois**
*Source : [Google Cloud Pricing Calculator](https://cloud.google.com/products/calculator)*

### Azure

VM B2s : 0,046 USD/h × 720 h = 33,12 USD
6 VMs : 198,72 USD, ajustement arrêt 3 VMs (–33 %) = –32,9 USD
Stockage 120 Go × 0,10 USD = 12 USD
**Total : 177,82 USD/mois**
*Source : [Azure Pricing Calculator](https://azure.microsoft.com/en-us/pricing/calculator/)*

### Scaleway

VM DEV1-S : 0,04 €/h → 0,046 USD/h × 720 h = 33,12 USD/VM
6 VMs : 198,72 USD
Stockage : 6×20 Go × 0,0115×1,15 ≈ 15 USD
Ajustement arrêt 3 VMs (–33 %) : –32,8 USD
**Total ajusté : 180,92 USD/mois**
*Source : [Scaleway Pricing](https://www.scaleway.com/en/pricing/)*

### OVH

VM équivalente : 0,145 USD/h × 720 h × 6 VMs = 626,4 USD
Ajustement arrêt 3 VMs (–33 %) : –149,4 USD
Stockage 6×20 Go × 0,12 USD = 14,4 USD
**Total : 491,4 USD/mois**
*Source : [OVH Public Cloud Pricing](https://www.ovhcloud.com/en/public-cloud/prices/)*

### Comparaison

AWS : 159,5 USD
Scaleway : 180,92 USD
Azure : 177,82 USD
GCP : 253,68 USD
OVH : 491,4 USD

---

## Infrastructure n°3

3 serveurs (4 Go RAM, 2 vCPU, 50 Go stockage)

* 1 load balancer (5 Mb/s)
* 1 base de données managée (8 Go RAM, 2 vCPU, 10 Go stockage)

### AWS

VM t3.small : 29,95 USD × 3 = 89,85 USD
Stockage 150 Go × 0,08 USD = 12 USD
Load Balancer ALB : 18 USD
RDS managé : 60 USD
**Total : 179,85 USD/mois**
*Source : [AWS Pricing Calculator](https://calculator.aws/#/)*

### GCP

VM équivalente : 3 × 0,067 USD/h × 720 h = 144,72 USD
Stockage 150 Go × 0,10 USD = 15 USD
Load Balancer : 18 USD
Cloud SQL : 60 USD
**Total : 237,72 USD/mois**
*Source : [Google Cloud Pricing Calculator](https://cloud.google.com/products/calculator)*

### Azure

VM équivalente : 3 × 0,046 USD/h × 720 h = 99,36 USD
Stockage 150 Go × 0,10 USD = 15 USD
Load Balancer : 18 USD
Azure SQL DB : 60 USD
**Total : 192,36 USD/mois**
*Source : [Azure Pricing Calculator](https://azure.microsoft.com/en-us/pricing/calculator/)*

### Scaleway

VM DEV1-M : 0,07 €/h × 1,15 = 0,0805 USD/h × 720 h = 57,96 USD/VM
3 VMs → 173,88 USD
Stockage + LB + DB managée : 150 USD
**Total : 323,88 USD/mois**
*Source : [Scaleway Pricing](https://www.scaleway.com/en/pricing/)*

### OVH

3 VMs équivalentes : 0,145 USD/h × 720 h × 3 = 313,2 USD
Stockage + LB + DB : 50 + 18 + 60 = 128 USD
**Total : 441,2 USD/mois**
*Source : [OVH Public Cloud Pricing](https://www.ovhcloud.com/en/public-cloud/prices/)*

### Comparaison

AWS : 179,85 USD
Azure : 192,36 USD
GCP : 237,72 USD
Scaleway : 323,88 USD
OVH : 441,2 USD

---

## Conclusion générale

Scaleway reste compétitif sur les petites VMs mais devient beaucoup plus cher dès que l’on ajoute des services managés.
AWS est le plus cohérent pour les infrastructures complètes.
Azure et GCP offrent des options intermédiaires, avec un bon rapport coût/performance pour des configurations simples.
OVH est plus cher pour des infrastructures complètes avec plusieurs VMs et services managés.
