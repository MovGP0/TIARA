/* Ghidra address: 01c06460 */
/* Ghidra symbol: FUN_01c06460 */


void FUN_01c06460(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_10;
  
  local_10 = 0;
  lVar2 = param_1[100];
  if (lVar2 != param_2) {
    if (lVar2 != 0) {
      FUN_01bfad40(lVar2,0);
    }
    param_1[100] = param_2;
    lVar2 = (**(code **)(*param_1 + 0xd0))(param_1);
    if (lVar2 != 0) {
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | 0x8000;
    }
    if (param_2 != 0) {
      iVar1 = *(int *)(param_1[100] + 0x48);
      if (iVar1 == 0x1fffffff) {
        FUN_01c060c0(param_1,1);
        FUN_0064e0c0(param_1,1);
      }
      else if (iVar1 == 0x20000000) {
        FUN_0064e0c0(param_1,1);
      }
      else if (iVar1 == 0x20000000) {
        FUN_0064e0c0(param_1,1);
      }
      else {
        FUN_0064e030(param_1,iVar1);
      }
      FUN_0064dbe0(param_1,*(undefined1 *)(param_2 + 0x58));
      FUN_01bfd990(param_1[100],&local_10);
      FUN_0064de00(param_1,local_10);
    }
  }
  FUN_00414480(&local_10);
  return;
}

