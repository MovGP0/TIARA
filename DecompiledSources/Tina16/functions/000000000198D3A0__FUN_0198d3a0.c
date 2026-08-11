/* Ghidra address: 0198d3a0 */
/* Ghidra symbol: FUN_0198d3a0 */


longlong * FUN_0198d3a0(longlong param_1,undefined4 param_2,longlong param_3)

{
  undefined8 in_RAX;
  longlong *plVar1;
  
  if (param_3 == 0) {
    plVar1 = (longlong *)FUN_0198b200(0,&PTR_FUN_01984d18,1,0);
  }
  else {
    plVar1 = (longlong *)
             FUN_0198b2d0(0,&PTR_FUN_01984d18,
                          CONCAT62((int6)((ulonglong)in_RAX >> 0x10),1) & 0xffffffff,param_3);
  }
  (**(code **)(*plVar1 + 0x28))(plVar1,*(undefined4 *)(param_1 + 0x10));
  *(undefined1 *)(plVar1 + 4) = 1;
  FUN_0198cd90(plVar1,param_1,param_2,1);
  *(undefined1 *)(plVar1 + 4) = 0;
  return plVar1;
}

