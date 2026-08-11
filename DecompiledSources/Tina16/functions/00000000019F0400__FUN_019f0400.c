/* Ghidra address: 019f0400 */
/* Ghidra symbol: FUN_019f0400 */


undefined8 FUN_019f0400(longlong param_1,undefined8 param_2,undefined4 param_3,longlong param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 local_29 [9];
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (param_4 != 0) {
    *(longlong *)(param_1 + 0x58) = param_4;
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x58) + 0x210))
                    (*(longlong **)(param_1 + 0x58),param_3);
  FUN_019effd0(param_1,param_2,uVar2,1,local_29);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  return param_2;
}

