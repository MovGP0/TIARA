/* Ghidra address: 0197c4f0 */
/* Ghidra symbol: FUN_0197c4f0 */


void FUN_0197c4f0(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *(undefined1 *)((longlong)param_2 + 0xb) = 1;
  *(undefined1 *)(param_2 + 1) = 0;
  *(undefined1 *)((longlong)param_2 + 0x1d) = 0;
  *(longlong *)((longlong)param_2 + 0x1f) = param_1[0x95];
  *(longlong **)((longlong)param_2 + 0x14) = param_1;
  *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(*param_1 + 0x270);
  *(undefined8 *)((longlong)param_2 + 0x2f) = 0;
  *(undefined8 *)((longlong)param_2 + 0x37) = 0;
  *(undefined8 *)((longlong)param_2 + 0x3f) = 0x3ff0000000000000;
  *param_2 = param_1;
  *(undefined1 *)((longlong)param_2 + 10) = 0;
  *(undefined1 *)((longlong)param_2 + 9) = 0;
  *(undefined1 *)((longlong)param_2 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_2 + 0x4c) = 5;
  *(undefined8 *)((longlong)param_2 + 0x4d) = 0;
  *(undefined8 *)((longlong)param_2 + 0x55) = 0;
  uVar2 = FUN_0065b870(param_1);
  uVar1 = FUN_01817280(uVar2);
  *(undefined4 *)((longlong)param_2 + 0x47) = uVar1;
  *(longlong *)((longlong)param_2 + 0x27) = param_1[0x96];
  lVar3 = (**(code **)(*param_1 + 0x268))(param_1);
  if (lVar3 == 0) {
    *(undefined1 *)((longlong)param_2 + 0x1e) = 0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x268))(param_1);
    *(bool *)((longlong)param_2 + 0x1e) = *(char *)(*(longlong *)(lVar3 + 0x220) + 9) == '\0';
  }
  return;
}

