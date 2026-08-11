/* Ghidra address: 005dc900 */
/* Ghidra symbol: FUN_005dc900 */


undefined8 FUN_005dc900(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  uVar2 = FUN_005dbd70(&DAT_005d46c8,CONCAT71((int7)((ulonglong)param_3 >> 8),1) & 0xffffffff,
                       *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x4a),
                       (*(byte *)(*(longlong *)(param_1 + 8) + 0x32) & 8) != 0);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x80))
                    (*(longlong **)(param_1 + 8),param_2,uVar2);
  FUN_005dbea0(param_1,local_20,param_2);
  FUN_005e1140(*(undefined8 *)(param_1 + 0x10),local_20[0],uVar1);
  FUN_00414480(local_20);
  return uVar2;
}

