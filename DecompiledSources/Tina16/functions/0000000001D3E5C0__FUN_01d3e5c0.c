/* Ghidra address: 01d3e5c0 */
/* Ghidra symbol: FUN_01d3e5c0 */


/* WARNING: Removing unreachable block (ram,0x01d3e612) */
/* WARNING: Removing unreachable block (ram,0x01d3e67b) */

ulonglong FUN_01d3e5c0(undefined8 param_1,int param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong unaff_RDI;
  undefined7 uVar4;
  undefined1 local_338 [776];
  
  FUN_01d03160(param_1);
  FUN_01d3da40(local_338,param_1);
  iVar1 = FUN_01d3e250(local_338,1);
  iVar3 = 1;
  uVar4 = (undefined7)(unaff_RDI >> 8);
  if (0 < iVar1) {
    do {
      iVar2 = FUN_01d3e170(local_338,iVar3,1,1);
      if (iVar2 == param_2) {
        *param_3 = iVar3;
        *param_4 = 1;
        unaff_RDI = CONCAT71(uVar4,1);
        goto LAB_01d3e6e8;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_01d3e250(local_338,2);
  iVar3 = 1;
  if (0 < iVar1) {
    do {
      iVar2 = FUN_01d3e170(local_338,iVar3,2,1);
      if (iVar2 == param_2) {
        *param_3 = iVar3;
        *param_4 = 2;
        unaff_RDI = CONCAT71(uVar4,1);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
LAB_01d3e6e8:
  return unaff_RDI & 0xffffffff;
}

