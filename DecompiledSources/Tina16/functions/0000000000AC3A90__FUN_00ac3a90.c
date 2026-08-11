/* Ghidra address: 00ac3a90 */
/* Ghidra symbol: FUN_00ac3a90 */


undefined4 FUN_00ac3a90(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined1 local_1c [12];
  
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x28))
                    (*(longlong **)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0);
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x20))
                    (*(longlong **)(param_1 + 0x18),0,uVar2,local_1c,&local_20);
  if (cVar1 == '\0') {
    local_20 = 0;
  }
  return local_20;
}

