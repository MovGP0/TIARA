/* Ghidra address: 00a47800 */
/* Ghidra symbol: FUN_00a47800 */


void FUN_00a47800(longlong param_1,int param_2,int param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_68;
  local_20 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x40))
                       (*(longlong **)(param_1 + 0xa0),param_2 + 1,param_3 + 1);
  local_48 = *(undefined8 *)(param_1 + 0xc0);
  local_40 = *(undefined8 *)(param_1 + 200);
  (**(code **)(*local_20 + 0x50))
            (local_20,param_1 + 0x58,*(undefined4 *)(param_1 + 0xb0),*(undefined4 *)(param_1 + 0xb8)
            );
  FUN_00410f20(local_20);
  return;
}

