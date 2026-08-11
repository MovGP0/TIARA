/* Ghidra address: 0074d340 */
/* Ghidra symbol: FUN_0074d340 */


void FUN_0074d340(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  longlong local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_20[0] = 0;
  if (((*(ushort *)(param_1 + 0x34) & 0x10) != 0) && (*(longlong *)(param_1 + 0x4d8) != 0)) {
    iVar2 = FUN_0064dc90(*(undefined8 *)(param_1 + 0x4d8));
    if (iVar2 != 0) {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x4d8),local_20);
      iVar2 = FUN_0043e420(local_20[0],*(undefined8 *)(param_1 + 0x10));
      if (iVar2 != 0) goto LAB_0074d3d1;
    }
    FUN_0064de00(*(undefined8 *)(param_1 + 0x4d8),param_2);
  }
LAB_0074d3d1:
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    FUN_0064dd90(param_1,&local_28);
    if (local_28 == 0) {
      bVar1 = true;
      goto LAB_0074d3fb;
    }
  }
  bVar1 = false;
LAB_0074d3fb:
  FUN_0064d9c0(param_1,param_2);
  if (bVar1) {
    FUN_0064de00(param_1,0);
  }
  FUN_00414560(&local_28,2);
  return;
}

