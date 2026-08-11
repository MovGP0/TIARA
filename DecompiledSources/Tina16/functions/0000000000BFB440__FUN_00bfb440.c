/* Ghidra address: 00bfb440 */
/* Ghidra symbol: FUN_00bfb440 */


void FUN_00bfb440(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  if ((*(ushort *)(param_1 + 0x34) & 0x11) == 0x10) {
    FUN_00bf36a0(param_1,&local_28);
    FUN_0043eb80(local_20,local_28);
    iVar2 = FUN_00416db0(local_20[0],*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 0) {
      bVar1 = true;
      goto LAB_00bfb4b0;
    }
  }
  bVar1 = false;
LAB_00bfb4b0:
  FUN_0064d9c0(param_1,param_2);
  if (bVar1) {
    FUN_00bfcc30(param_1,param_2);
  }
  FUN_00414560(&local_28,2);
  return;
}

