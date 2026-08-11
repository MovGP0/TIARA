/* Ghidra address: 00c777b0 */
/* Ghidra symbol: FUN_00c777b0 */


void FUN_00c777b0(longlong *param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0x90))(param_1);
  if ((lVar1 != 0) && (*(longlong *)(param_1[0x42] + 0x60) != 0)) {
    if (param_2 == '\0') {
      FUN_00805990(*(undefined8 *)(param_1[0x42] + 0x60));
      (**(code **)(**(longlong **)(param_1[0x42] + 0x60) + 0x130))
                (*(longlong **)(param_1[0x42] + 0x60),0);
      FUN_00655f80(*(undefined8 *)(param_1[0x42] + 0x60),0);
    }
    else {
      (**(code **)(**(longlong **)(param_1[0x42] + 0x60) + 0x130))
                (*(longlong **)(param_1[0x42] + 0x60),0);
      FUN_00655f80(*(undefined8 *)(param_1[0x42] + 0x60),param_1[0x53]);
      FUN_00806af0(*(undefined8 *)(param_1[0x42] + 0x60),*(undefined4 *)(param_1[0x42] + 0x8c));
      FUN_00806b40(*(undefined8 *)(param_1[0x42] + 0x60),*(undefined4 *)(param_1[0x42] + 0x90));
      FUN_0064cbf0(*(undefined8 *)(param_1[0x42] + 0x60),*(undefined4 *)(param_1[0x42] + 0x94));
      FUN_0064cc50(*(undefined8 *)(param_1[0x42] + 0x60),*(undefined4 *)(param_1[0x42] + 0x98));
      FUN_008059a0(*(undefined8 *)(param_1[0x42] + 0x60));
      (**(code **)(**(longlong **)(param_1[0x42] + 0x60) + 0x180))
                (*(longlong **)(param_1[0x42] + 0x60));
    }
  }
  return;
}

