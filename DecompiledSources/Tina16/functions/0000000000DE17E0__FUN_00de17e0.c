/* Ghidra address: 00de17e0 */
/* Ghidra symbol: FUN_00de17e0 */


undefined8 FUN_00de17e0(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [16];
  
  FUN_00498350(local_28,0,0,0x7fff,0x7fff);
  (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x38))
            (*(longlong **)(param_1 + 0x4d8),param_2,local_28);
  return 0;
}

