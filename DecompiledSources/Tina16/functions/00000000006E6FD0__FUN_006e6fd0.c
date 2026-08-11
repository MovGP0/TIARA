/* Ghidra address: 006e6fd0 */
/* Ghidra symbol: FUN_006e6fd0 */


undefined8 FUN_006e6fd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 local_7c [8];
  uint local_74;
  
  FUN_006e6ea0(param_1,local_7c);
  if ((local_74 & 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = CONCAT71((uint7)(uint3)(local_74 >> 8),1);
  }
  return uVar1;
}

