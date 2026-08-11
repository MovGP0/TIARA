/* Ghidra address: 007157a0 */
/* Ghidra symbol: FUN_007157a0 */


void FUN_007157a0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_30 [2];
  undefined8 local_20;
  
  local_30[0] = (longlong *)0x0;
  local_20 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xf0) + 0x28);
  uVar1 = *(uint *)(param_1 + 0xcc);
  if (*(uint *)(lVar2 + 0x10) <= uVar1) {
    FUN_00594f90();
  }
  FUN_0041b840(&local_20,
               *(undefined8 *)
                (*(longlong *)(*(longlong *)(lVar2 + 8) + (longlong)(int)uVar1 * 8) + 8));
  FUN_0041b890(local_30,local_20,&LAB_00715878);
  (**(code **)(*local_30[0] + 0x78))(local_30[0],param_2,param_3);
  FUN_0041b800(local_30);
  FUN_0041b800(&local_20);
  return;
}

