/* Ghidra address: 00c242d0 */
/* Ghidra symbol: FUN_00c242d0 */


void FUN_00c242d0(longlong param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 local_40 [2];
  undefined2 local_2e;
  undefined1 uStack_2c;
  undefined2 local_2b;
  undefined1 uStack_29;
  
  local_40[0] = 0;
  bVar1 = FUN_00c32d70(*(undefined8 *)(param_1 + 8));
  if (bVar1 == 0) {
    FUN_0041ddd0(local_40,PTR_PTR_020045b8);
    FUN_00c1a320(local_40[0]);
  }
  local_2e = 0x4947;
  uStack_2c = 0x46;
  local_2b = *(undefined2 *)((longlong)&UNWIND_INFO_01e9f518 + (ulonglong)bVar1 * 3 + 1);
  uStack_29 = *(undefined1 *)((longlong)&UNWIND_INFO_01e9f518 + (ulonglong)bVar1 * 3 + 3);
  FUN_00c24280(param_1);
  (**(code **)(*param_2 + 0x20))(param_2,&local_2e,6);
  (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x10,7);
  if ((*(byte *)(param_1 + 0x14) & 0x80) == 0x80) {
    FUN_00c22e40(*(undefined8 *)(param_1 + 0x18),param_2);
  }
  FUN_00414480(local_40);
  return;
}

