/* Ghidra address: 01873140 */
/* Ghidra symbol: FUN_01873140 */


undefined1 FUN_01873140(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  longlong *local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined8 local_18;
  undefined1 local_9;
  
  local_30 = auStack_58;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  local_9 = 0;
  local_20 = FUN_01872f50(param_1,*param_2);
  if ((local_res18[0] != (longlong *)0x0) && (local_20 != 0)) {
    local_18 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
    cVar1 = (*(code *)**(undefined8 **)(local_20 + 0x10))
                      (*(undefined8 **)(local_20 + 0x10),param_2,local_18,
                       *(undefined8 *)(local_20 + 0x18));
    if (cVar1 != '\0') {
      FUN_004b6dc0(local_18,0);
      local_9 = (**(code **)(*local_res18[0] + 0x18))(local_res18[0],local_18,*param_2);
    }
    FUN_00410f20(local_18);
  }
  FUN_0041b800(local_res18);
  return local_9;
}

