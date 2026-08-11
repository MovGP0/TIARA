/* Ghidra address: 019edff0 */
/* Ghidra symbol: FUN_019edff0 */


undefined1 FUN_019edff0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  
  puVar1 = (undefined1 *)
           FUN_01cfde70(*(undefined8 *)(param_1 + 0x58),param_2,param_3,&local_9,&local_a,&local_b);
  return *puVar1;
}

