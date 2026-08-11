/* Ghidra address: 0146ee90 */
/* Ghidra symbol: FUN_0146ee90 */


void FUN_0146ee90(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                 longlong param_5)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  FUN_013b9e80(*(undefined8 *)(param_1 + 0x800),local_res10[0],param_3);
  if (param_4 != 0) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x4e8);
    (**(code **)(*plVar1 + 0x10))(plVar1,param_4);
    *(undefined1 *)(param_1 + 0x80a) = 1;
  }
  *(longlong *)(param_1 + 0x810) = param_5;
  if (param_5 != 0) {
    plVar1 = (longlong *)FUN_00bf2c10(*(undefined8 *)(param_1 + 0x738));
    (**(code **)(*plVar1 + 0x10))
              (plVar1,*(undefined8 *)
                       (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x810) + 0x28) + 0x90) +
                       0x80));
  }
  *(undefined1 *)(param_1 + 0x808) = *(undefined1 *)(param_1 + 0x80a);
  *(undefined1 *)(param_1 + 0x809) = 1;
  FUN_00414480(local_res10);
  return;
}

