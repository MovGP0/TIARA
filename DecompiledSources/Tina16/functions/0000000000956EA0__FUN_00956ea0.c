/* Ghidra address: 00956ea0 */
/* Ghidra symbol: FUN_00956ea0 */


undefined8 FUN_00956ea0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_1c [3];
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0xb0))
                    (*(longlong **)(param_1 + 0x130),param_2,local_1c);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0x130) + 0x40))
                      (*(longlong **)(param_1 + 0x130),local_1c[0]);
  }
  return uVar2;
}

