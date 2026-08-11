/* Ghidra address: 00545c40 */
/* Ghidra symbol: FUN_00545c40 */


undefined8 FUN_00545c40(undefined8 param_1,longlong *param_2)

{
  ushort *puVar1;
  uint uVar2;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 0;
  puVar1 = (ushort *)*param_2;
  uVar2 = (uint)*puVar1;
  *param_2 = *param_2 + (longlong)(int)uVar2;
  local_20 = param_1;
  local_18 = param_2;
  if (uVar2 == 2) {
    FUN_0041b800(param_1);
  }
  else {
    FUN_00545ba0(auStack_48,&local_10,puVar1);
    FUN_0041b840(local_20,local_10);
  }
  FUN_0041b800(&local_10);
  return local_20;
}

