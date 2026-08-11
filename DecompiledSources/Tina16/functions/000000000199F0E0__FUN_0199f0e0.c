/* Ghidra address: 0199f0e0 */
/* Ghidra symbol: FUN_0199f0e0 */


undefined1 FUN_0199f0e0(longlong param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    uVar1 = 0;
  }
  else {
    puVar2 = (undefined1 *)
             FUN_01cfde70(*(undefined8 *)(param_1 + 0x88),param_2,0,param_1 + 0x4f,param_1 + 0x4e,
                          param_1 + 0x4d);
    uVar1 = *puVar2;
  }
  return uVar1;
}

