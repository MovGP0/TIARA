/* Ghidra address: 0196f000 */
/* Ghidra symbol: FUN_0196f000 */


void FUN_0196f000(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  lVar1 = *(longlong *)(param_1 + 0x200);
  if ((lVar1 != 0) && (param_3 != 0)) {
    uVar4 = *(undefined8 *)(lVar1 + 0x278);
    uVar3 = *(undefined8 *)(lVar1 + 0x298);
  }
  iVar2 = FUN_004b2060(*(undefined8 *)(param_1 + 0x170));
  if (0 < iVar2) {
    FUN_0180f210(*(undefined8 *)(param_1 + 0x170),L"Datasets",param_2,param_1,0);
  }
  iVar2 = FUN_004b2060(*(undefined8 *)(param_1 + 0x298));
  if (0 < iVar2) {
    FUN_0180f210(*(undefined8 *)(param_1 + 0x298),L"Variables",param_2,param_1,uVar3);
  }
  iVar2 = FUN_004b2060(*(undefined8 *)(param_1 + 0x278));
  if (0 < iVar2) {
    FUN_0180f210(*(undefined8 *)(param_1 + 0x278),L"Styles",param_2,param_1,uVar4);
  }
  return;
}

