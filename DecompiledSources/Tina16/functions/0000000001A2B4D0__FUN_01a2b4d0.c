/* Ghidra address: 01a2b4d0 */
/* Ghidra symbol: FUN_01a2b4d0 */


void FUN_01a2b4d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = auStack_68;
  local_30 = 0;
  local_38 = 0;
  FUN_01a2a060(&local_38,L"%s-json-saved.json");
  uVar1 = FUN_019a4600();
  FUN_01a2b2d0(param_1,uVar1,local_38,0);
  FUN_00414560(&local_38,2);
  return;
}

