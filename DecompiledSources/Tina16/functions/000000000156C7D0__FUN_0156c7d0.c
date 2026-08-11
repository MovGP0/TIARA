/* Ghidra address: 0156c7d0 */
/* Ghidra symbol: FUN_0156c7d0 */


undefined8 FUN_0156c7d0(longlong param_1,int param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 local_40;
  undefined8 local_30;
  
  local_30 = 0;
  local_40 = 0;
  *param_3 = 0;
  iVar5 = *(int *)(*(longlong *)(param_1 + 0x938) + 0x10);
  iVar4 = 0;
  uVar1 = local_40;
  if (-1 < iVar5 + -1) {
    do {
      lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x938),iVar4);
      lVar3 = *(longlong *)(lVar3 + 0x858);
      if (lVar3 != 0) {
        uVar1 = *(undefined8 *)(*(longlong *)(lVar3 + 0x40) + 0x1a8);
        cVar2 = FUN_01d404e0(*(undefined8 *)(lVar3 + 0x18),param_3);
        if ((cVar2 != '\0') && (*(int *)(lVar3 + 0xf8) == param_2)) break;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
      uVar1 = local_40;
    } while (iVar5 != 0);
  }
  local_40 = uVar1;
  FUN_00414480(&local_30);
  return local_40;
}

