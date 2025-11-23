# Comparatif des coûts Cloud – Infrastructures 1, 2 et 3 (Prix en USD, HT, mensuel)

Les coûts ci-dessous sont exprimés en dollars US (USD), hors taxes, selon une périodicité mensuelle.
Aucune licence n’est incluse (Windows, SQL Server…), aucun plan d’économie (Saving Plans, Spot, Commitment) n’est appliqué.
La région privilégiée est France (Paris) ou, à défaut, Europe.

Tous les calculs mensuels sont basés sur 720 heures/mois.
Conversions EUR → USD réalisées au taux 1 EUR = 1,15 USD (ECB – 23/11/2025).

## Infrastructure n°1
1 serveur : 16 Go RAM, 4 vCPU, 100 Go stockage
### AWS

Instance t3.xlarge : 0,1664 USD/h → 119,81 USD/mois

Stockage gp3 : 0,08 USD/Go → 8 USD

Total : 127,81 USD/mois

### GCP

VM e2-standard-4 : 0,134 USD/h → 96,48 USD/mois

Stockage persistant : 0,10 USD/Go → 10 USD

Total : 106,48 USD/mois

### Azure

VM D4s_v4 : 0,192 USD/h → 138,24 USD/mois

Stockage SSD : 0,08 USD/Go → 8 USD

Total : 146,24 USD/mois

### Scaleway

VM PRO2-XS : 0,11 €/h → ≈ 91,08 USD/mois

Stockage bloc : 0,11 €/Go → ≈ 12,65 USD

Total : ~103,7 USD/mois

### OVH

Coût approximatif équivalent AWS/GCP : 110–130 USD/mois

Total estimé : ~120 USD/mois

### Comparaison

Scaleway (~104 USD) — le moins cher

GCP (~106 USD)

OVH (~120 USD)

AWS (~128 USD)

Azure (~146 USD) — le plus cher

## Infrastructure n°2
6 serveurs : 6 Go RAM, 3 vCPU, 20 Go stockage
3 serveurs arrêtés 8h/jour (–33%)
### AWS

VM t3.medium : 0,0416 USD/h → 29,95 USD/mois

6 VMs : 179,7 USD/mois

Stockage 120 Go : 0,08 USD/Go → 9,6 USD

Économie arrêt partiel (3 VMs, –33 %) : ≈ –30 USD

Total ajusté : ~159,3 USD/mois

### GCP

Estimation : 160–170 USD/mois

### Azure

Estimation : ≈ 165 USD/mois

### Scaleway

VM DEV1-S : 0,04 €/h → ~33 USD/mois/VM

6 VMs : ~198 USD

Stockage : ~15 USD

Ajustement arrêt partiel : –33 % sur 3 VMs

Total ajusté : ≈ 180 USD/mois

### OVH

Estimation : 160–170 USD/mois

### Comparaison

L’écart entre fournisseurs se resserre :

AWS, GCP, Azure, OVH : ~160–170 USD

Scaleway : ~180 USD (moins avantageux sur de multiples petits serveurs)

## Infrastructure n°3
3 serveurs (4 Go RAM, 2 vCPU, 50 Go stockage)
+ 1 load balancer (5 Mb/s)
+ 1 base de données managée (8 Go RAM, 2 vCPU, 10 Go stockage)
### AWS

VM t3.small : 29,95 USD/mois → 89,85 USD (3 VMs)

Stockage 150 Go : 0,08 USD/Go → 12 USD

Load Balancer ALB : ~18 USD/mois

Base managée RDS : ~60 USD/mois

Total AWS : ~180 USD/mois

### GCP

Estimation services équivalents : 180–190 USD/mois

### Azure

Estimation similaire : 180–190 USD/mois

### Scaleway

VM DEV1-M : 0,07 €/h → ~57 USD/mois

3 VMs → ~171 USD

Stockage + LB + DB managée : ~150 USD

Total Scaleway : ~325 USD/mois

### OVH

Estimation équivalente AWS/GCP/Azure : 180–190 USD/mois

### Comparaison

AWS / GCP / Azure / OVH : ≈ 180–190 USD/mois

Scaleway : ~325 USD → clairement plus cher lorsqu’on ajoute des services managés

## Conclusion générale

Scaleway est le moins cher sur les machines simples, mais devient cher dès qu’on ajoute des services managés (DB, Load Balancer…).

AWS, GCP, Azure et OVH sont globalement alignés pour les infrastructures complètes, autour de 180–190 USD/mois.

Azure est souvent le plus cher pour les VMs seules.

GCP offre souvent le meilleur rapport coût/performance sur les petites configurations.
