/* Ghidra address: 01705800 */
/* Ghidra symbol: FUN_01705800 */


void FUN_01705800(longlong param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  (**(code **)(*param_3 + 0x90))(param_3);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      lVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar2);
      if (*(int *)(lVar1 + 0x18) == param_4 + -1) {
        FUN_0043e130(&local_20,*(undefined8 *)(lVar1 + 8));
        (**(code **)(*param_3 + 0x78))(param_3,local_20);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_20);
  return;
}

