/* Ghidra address: 00956520 */
/* Ghidra symbol: FUN_00956520 */


undefined8
FUN_00956520(longlong param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
            undefined1 param_5)

{
  undefined8 in_RAX;
  undefined8 uVar1;
  undefined8 local_20;
  
  uVar1 = FUN_00949940(&PTR_FUN_009061b0,CONCAT71((int7)((ulonglong)in_RAX >> 8),1) & 0xffffffff,
                       param_2,param_3,param_4,param_5);
  local_20 = uVar1;
  FUN_00597e50(*(longlong *)(param_1 + 0x88) + 8,&local_20);
  return uVar1;
}

