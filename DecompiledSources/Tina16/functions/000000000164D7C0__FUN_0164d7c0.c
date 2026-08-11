/* Ghidra address: 0164d7c0 */
/* Ghidra symbol: FUN_0164d7c0 */


void FUN_0164d7c0(undefined8 param_1,longlong param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 in_RAX;
  int iVar3;
  bool bVar4;
  longlong local_30 [5];
  
  if ((byte)(param_4 - 8U) < 8) {
    bVar4 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 - 8U & 0x1f) & 0x11U) != 0;
  }
  else {
    bVar4 = false;
  }
  if (!bVar4) {
    (**(code **)(**(longlong **)(param_2 + 0x128) + 0x2d0))
              (*(longlong **)(param_2 + 0x128),0,local_30);
    lVar1 = *(longlong *)(local_30[0] + 0x38);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    iVar3 = *(int *)(lVar1 + 0x44);
    iVar2 = 1;
    if (0 < iVar3) {
      do {
        *(undefined8 *)(*(longlong *)(lVar1 + 0x38) + (longlong)(iVar2 + -1) * 8) = 0;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

