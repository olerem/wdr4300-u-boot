/***********************************************************************
 *
 * Copyright (C) 2004 by FS Forth-Systeme GmbH.
 * All rights reserved.
 *
 * $Id: //depot/sw/releases/Aquila_9.2.0_U6/boot/u-boot/include/ns9750_eth.h#1 $
 * @Author: Markus Pietrek
 * @References: [1] NS9750 Hardware Reference, December 2003
 *              [2] Intel LXT971 Datasheet #249414 Rev. 02
 *              [3] NS7520 Linux Ethernet Driver
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston,
 * MA 02111-1307 USA
 *
 ***********************************************************************/

#ifndef FS_NS9750_ETH_H
#define FS_NS9750_ETH_H

#ifdef CONFIG_DRIVER_NS9750_ETHERNET

#include "lxt971a.h"

#define	NS9750_ETH_MODULE_BASE	 	(0xA0600000)

#define get_eth_reg_addr(c) \
     ((volatile unsigned int*) ( NS9750_ETH_MODULE_BASE+(unsigned int) (c)))

#define NS9750_ETH_EGCR1	 	(0x0000)
#define NS9750_ETH_EGCR2	 	(0x0004)
#define NS9750_ETH_EGSR		 	(0x0008)
#define NS9750_ETH_FIFORX	 	(0x000C)
#define NS9750_ETH_FIFOTX	 	(0x0010)
#define NS9750_ETH_FIFOTXS	 	(0x0014)
#define NS9750_ETH_ETSR		 	(0x0018)
#define NS9750_ETH_ERSR		 	(0x001C)
#define NS9750_ETH_MAC1			(0x0400)
#define NS9750_ETH_MAC2			(0x0404)
#define NS9750_ETH_IPGT			(0x0408)
#define NS9750_ETH_IPGR			(0x040C)
#define NS9750_ETH_CLRT			(0x0410)
#define NS9750_ETH_MAXF			(0x0414)
#define NS9750_ETH_SUPP			(0x0418)
#define NS9750_ETH_TEST			(0x041C)
#define NS9750_ETH_MCFG			(0x0420)
#define NS9750_ETH_MCMD			(0x0424)
#define NS9750_ETH_MADR			(0x0428)
#define NS9750_ETH_MWTD			(0x042C)
#define NS9750_ETH_MRDD			(0x0430)
#define NS9750_ETH_MIND			(0x0434)
#define NS9750_ETH_SA1			(0x0440)
#define NS9750_ETH_SA2			(0x0444)
#define NS9750_ETH_SA3			(0x0448)
#define NS9750_ETH_SAFR			(0x0500)
#define NS9750_ETH_HT1		 	(0x0504)
#define NS9750_ETH_HT2		 	(0x0508)
#define NS9750_ETH_STAT_BASE	 	(0x0680)
#define NS9750_ETH_RXAPTR		(0x0A00)
#define NS9750_ETH_RXBPTR		(0x0A04)
#define NS9750_ETH_RXCPTR		(0x0A08)
#define NS9750_ETH_RXDPTR		(0x0A0C)
#define NS9750_ETH_EINTR		(0x0A10)
#define NS9750_ETH_EINTREN		(0x0A14)
#define NS9750_ETH_TXPTR		(0x0A18)
#define NS9750_ETH_TXRPTR		(0x0A1C)
#define NS9750_ETH_TXERBD		(0x0A20)
#define NS9750_ETH_TXSPTR		(0x0A24)
#define NS9750_ETH_RXAOFF		(0x0A28)
#define NS9750_ETH_RXBOFF		(0x0A2C)
#define NS9750_ETH_RXCOFF		(0x0A30)
#define NS9750_ETH_RXDOFF		(0x0A34)
#define NS9750_ETH_TXOFF		(0x0A38)
#define NS9750_ETH_RXFREE		(0x0A3C)
#define NS9750_ETH_TXBD			(0x1000)

/* register bit fields */

#define NS9750_ETH_EGCR1_ERX	 	(0x80000000)
#define NS9750_ETH_EGCR1_ERXDMA	 	(0x40000000)
#define NS9750_ETH_EGCR1_ERXSHT	 	(0x10000000)
#define NS9750_ETH_EGCR1_ERXSIZ	 	(0x08000000)
#define NS9750_ETH_EGCR1_ETXSIZ	 	(0x04000000)
#define NS9750_ETH_EGCR1_ETXDIAG	(0x02000000)
#define NS9750_ETH_EGCR1_ERXBAD	 	(0x01000000)
#define NS9750_ETH_EGCR1_ETX	 	(0x00800000)
#define NS9750_ETH_EGCR1_ETXDMA	 	(0x00400000)
#define NS9750_ETH_EGCR1_ETXWM	  	(0x00200000)
#define NS9750_ETH_EGCR1_ERXADV	 	(0x00100000)
#define NS9750_ETH_EGCR1_ERXINIT	(0x00080000)
#define NS9750_ETH_EGCR1_PHY_MODE_MA  	(0x0000C000)
#define NS9750_ETH_EGCR1_PHY_MODE_MII 	(0x00008000)
#define NS9750_ETH_EGCR1_PHY_MODE_RMII 	(0x00004000)
#define NS9750_ETH_EGCR1_RXCINV	 	(0x00001000)
#define NS9750_ETH_EGCR1_TXCINV	 	(0x00000800)
#define NS9750_ETH_EGCR1_RXALIGN	(0x00000400)
#define NS9750_ETH_EGCR1_MAC_HRST 	(0x00000200)
#define NS9750_ETH_EGCR1_ITXA	 	(0x00000100)

#define NS9750_ETH_EGCR2_TPTV_MA	(0xFFFF0000)
#define NS9750_ETH_EGCR2_TPCF		(0x00000040)
#define NS9750_ETH_EGCR2_THPDF		(0x00000020)
#define NS9750_ETH_EGCR2_TCLER		(0x00000008)
#define NS9750_ETH_EGCR2_AUTOZ		(0x00000004)
#define NS9750_ETH_EGCR2_CLRCNT		(0x00000002)
#define NS9750_ETH_EGCR2_STEN		(0x00000001)

#define NS9750_ETH_EGSR_RXINIT	 	(0x00100000)
#define NS9750_ETH_EGSR_TXFIFONF 	(0x00080000)
#define NS9750_ETH_EGSR_TXFIFOH	 	(0x00040000)
#define NS9750_ETH_EGSR_TXFIFOE	 	(0x00010000)

#define NS9750_ETH_FIFOTXS_ALL		(0x00000055)
#define NS9750_ETH_FIFOTXS_3		(0x000000d5)
#define NS9750_ETH_FIFOTXS_2		(0x00000035)
#define NS9750_ETH_FIFOTXS_1		(0x0000000D)
#define NS9750_ETH_FIFOTXS_0		(0x00000003)

#define NS9750_ETH_ETSR_TXOK	 	(0x00008000)
#define NS9750_ETH_ETSR_TXBR	 	(0x00004000)
#define NS9750_ETH_ETSR_TXMC	 	(0x00002000)
#define NS9750_ETH_ETSR_TXAL	 	(0x00001000)
#define NS9750_ETH_ETSR_TXAED	 	(0x00000800)
#define NS9750_ETH_ETSR_TXAEC	 	(0x00000400)
#define NS9750_ETH_ETSR_TXAUR	 	(0x00000200)
#define NS9750_ETH_ETSR_TXAJ	 	(0x00000100)
#define NS9750_ETH_ETSR_TXDEF	 	(0x00000040)
#define NS9750_ETH_ETSR_TXCRC	 	(0x00000020)
#define NS9750_ETH_ETSR_TXCOLC   	(0x0000000F)

#define NS9750_ETH_ERSR_RXSIZE_MA	(0x0FFF0000)
#define NS9750_ETH_ERSR_RXCE	 	(0x00008000)
#define NS9750_ETH_ERSR_RXDV	 	(0x00004000)
#define NS9750_ETH_ERSR_RXOK	 	(0x00002000)
#define NS9750_ETH_ERSR_RXBR	 	(0x00001000)
#define NS9750_ETH_ERSR_RXMC	 	(0x00000800)
#define NS9750_ETH_ERSR_RXCRC	 	(0x00000400)
#define NS9750_ETH_ERSR_RXDR	 	(0x00000200)
#define NS9750_ETH_ERSR_RXCV	 	(0x00000100)
#define NS9750_ETH_ERSR_RXSHT	 	(0x00000040)

#define NS9750_ETH_MAC1_SRST	 	(0x00008000)
#define NS9750_ETH_MAC1_SIMMRST	 	(0x00004000)
#define NS9750_ETH_MAC1_RPEMCSR	 	(0x00000800)
#define NS9750_ETH_MAC1_RPERFUN	 	(0x00000400)
#define NS9750_ETH_MAC1_RPEMCST	 	(0x00000200)
#define NS9750_ETH_MAC1_RPETFUN	 	(0x00000100)
#define NS9750_ETH_MAC1_LOOPBK	 	(0x00000010)
#define NS9750_ETH_MAC1_TXFLOW	 	(0x00000008)
#define NS9750_ETH_MAC1_RXFLOW	 	(0x00000004)
#define NS9750_ETH_MAC1_PALLRX	 	(0x00000002)
#define NS9750_ETH_MAC1_RXEN	 	(0x00000001)

#define NS9750_ETH_MAC2_EDEFER	 	(0x00004000)
#define NS9750_ETH_MAC2_BACKP	 	(0x00002000)
#define NS9750_ETH_MAC2_NOBO	 	(0x00001000)
#define NS9750_ETH_MAC2_LONGP	 	(0x00000200)
#define NS9750_ETH_MAC2_PUREP	 	(0x00000100)
#define NS9750_ETH_MAC2_AUTOP	 	(0x00000080)
#define NS9750_ETH_MAC2_VLANP	 	(0x00000040)
#define NS9750_ETH_MAC2_PADEN  	 	(0x00000020)
#define NS9750_ETH_MAC2_CRCEN	 	(0x00000010)
#define NS9750_ETH_MAC2_DELCRC	 	(0x00000008)
#define NS9750_ETH_MAC2_HUGE	 	(0x00000004)
#define NS9750_ETH_MAC2_FLENC	 	(0x00000002)
#define NS9750_ETH_MAC2_FULLD	 	(0x00000001)

#define NS9750_ETH_IPGT_MA	 	(0x0000007F)

#define NS9750_ETH_IPGR_IPGR1	 	(0x00007F00)
#define NS9750_ETH_IPGR_IPGR2	 	(0x0000007F)

#define NS9750_ETH_CLRT_CWIN	 	(0x00003F00)
#define	NS9750_ETH_CLRT_RETX	 	(0x0000000F)

#define NS9750_ETH_MAXF_MAXF	 	(0x0000FFFF)

#define NS9750_ETH_SUPP_RPERMII	 	(0x00008000)
#define NS9750_ETH_SUPP_SPEED  	 	(0x00000080)

#define NS9750_ETH_TEST_TBACK	 	(0x00000004)
#define NS9750_ETH_TEST_TPAUSE	 	(0x00000002)
#define NS9750_ETH_TEST_SPQ	 	(0x00000001)

#define NS9750_ETH_MCFG_RMIIM	 	(0x00008000)
#define NS9750_ETH_MCFG_CLKS_MA	 	(0x0000001C)
#define NS9750_ETH_MCFG_CLKS_4	 	(0x00000004)
#define NS9750_ETH_MCFG_CLKS_6	 	(0x00000008)
#define NS9750_ETH_MCFG_CLKS_8	 	(0x0000000C)
#define NS9750_ETH_MCFG_CLKS_10	 	(0x00000010)
#define NS9750_ETH_MCFG_CLKS_20	 	(0x00000014)
#define NS9750_ETH_MCFG_CLKS_30	 	(0x00000018)
#define NS9750_ETH_MCFG_CLKS_40	 	(0x0000001C)
#define NS9750_ETH_MCFG_SPRE	 	(0x00000002)
#define NS9750_ETH_MCFG_SCANI	 	(0x00000001)

#define NS9750_ETH_MCMD_SCAN	 	(0x00000002)
#define NS9750_ETH_MCMD_READ	 	(0x00000001)

#define NS9750_ETH_MADR_DADR_MA	 	(0x00001F00)
#define NS9750_ETH_MADR_RADR_MA	 	(0x0000001F)

#define NS9750_ETH_MWTD_MA	 	(0x0000FFFF)

#define NS9750_ETH_MRRD_MA	 	(0x0000FFFF)

#define NS9750_ETH_MIND_MIILF		(0x00000008)
#define NS9750_ETH_MIND_NVALID		(0x00000004)
#define NS9750_ETH_MIND_SCAN	 	(0x00000002)
#define NS9750_ETH_MIND_BUSY	 	(0x00000001)

#define NS9750_ETH_SA1_OCTET1_MA 	(0x0000FF00)
#define NS9750_ETH_SA1_OCTET2_MA 	(0x000000FF)

#define NS9750_ETH_SA2_OCTET3_MA 	(0x0000FF00)
#define NS9750_ETH_SA2_OCTET4_MA 	(0x000000FF)

#define NS9750_ETH_SA3_OCTET5_MA 	(0x0000FF00)
#define NS9750_ETH_SA3_OCTET6_MA 	(0x000000FF)

#define NS9750_ETH_SAFR_PRO	 	(0x00000008)
#define NS9750_ETH_SAFR_PRM	 	(0x00000004)
#define NS9750_ETH_SAFR_PRA	 	(0x00000002)
#define NS9750_ETH_SAFR_BROAD	 	(0x00000001)

#define NS9750_ETH_HT1_MA	 	(0x0000FFFF)

#define NS9750_ETH_HT2_MA	 	(0x0000FFFF)

/* also valid for EINTREN */
#define NS9750_ETH_EINTR_RXOVL_DATA	(0x02000000)
#define NS9750_ETH_EINTR_RXOVL_STAT	(0x01000000)
#define NS9750_ETH_EINTR_RXBUFC		(0x00800000)
#define NS9750_ETH_EINTR_RXDONEA	(0x00400000)
#define NS9750_ETH_EINTR_RXDONEB	(0x00200000)
#define NS9750_ETH_EINTR_RXDONEC	(0x00100000)
#define NS9750_ETH_EINTR_RXDONED	(0x00080000)
#define NS9750_ETH_EINTR_RXNOBUF	(0x00040000)
#define NS9750_ETH_EINTR_RXBUFFUL	(0x00020000)
#define NS9750_ETH_EINTR_RXBR		(0x00010000)
#define NS9750_ETH_EINTR_STOVFL		(0x00000040)
#define NS9750_ETH_EINTR_TXPAUSE	(0x00000020)
#define NS9750_ETH_EINTR_TXBUFC		(0x00000010)
#define NS9750_ETH_EINTR_TXBUFNR	(0x00000008)
#define NS9750_ETH_EINTR_TXDONE		(0x00000004)
#define NS9750_ETH_EINTR_TXERR 		(0x00000002)
#define NS9750_ETH_EINTR_TXIDLE		(0x00000001)
#define NS9750_ETH_EINTR_RX_MA	\
	(NS9750_ETH_EINTR_RXOVL_DATA | \
	 NS9750_ETH_EINTR_RXOVL_STAT | \
	 NS9750_ETH_EINTR_RXBUFC | \
	 NS9750_ETH_EINTR_RXDONEA | \
	 NS9750_ETH_EINTR_RXDONEB | \
	 NS9750_ETH_EINTR_RXDONEC | \
	 NS9750_ETH_EINTR_RXDONED | \
	 NS9750_ETH_EINTR_RXNOBUF | \
	 NS9750_ETH_EINTR_RXBUFFUL | \
	 NS9750_ETH_EINTR_RXBR )
#define NS9750_ETH_EINTR_TX_MA	\
	(NS9750_ETH_EINTR_TXPAUSE | \
	 NS9750_ETH_EINTR_TXBUFC | \
	 NS9750_ETH_EINTR_TXBUFNR | \
	 NS9750_ETH_EINTR_TXDONE | \
	 NS9750_ETH_EINTR_TXERR | \
	 NS9750_ETH_EINTR_TXIDLE)

/* for TXPTR, TXRPTR, TXERBD and TXSPTR */
#define NS9750_ETH_TXPTR_MA		(0x000000FF)

/* for RXAOFF, RXBOFF, RXCOFF and RXDOFF */
#define NS9750_ETH_RXOFF_MA		(0x000007FF)

#define NS9750_ETH_TXOFF_MA		(0x000003FF)

#define NS9750_ETH_RXFREE_D		(0x00000008)
#define NS9750_ETH_RXFREE_C		(0x00000004)
#define NS9750_ETH_RXFREE_B		(0x00000002)
#define NS9750_ETH_RXFREE_A		(0x00000001)

#ifndef NS9750_ETH_PHY_ADDRESS
# define NS9750_ETH_PHY_ADDRESS	 	(0x0001) /* suitable for UNC20 */
#endif /* NETARM_ETH_PHY_ADDRESS */

#endif /* CONFIG_DRIVER_NS9750_ETHERNET */

#endif /* FS_NS9750_ETH_H */
