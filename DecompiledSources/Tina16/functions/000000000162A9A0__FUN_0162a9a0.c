/* Ghidra address: 0162a9a0 */
/* Ghidra symbol: FUN_0162a9a0 */


void FUN_0162a9a0(longlong param_1)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = 0;
  FUN_01618e70(&local_10,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x10),0);
  FUN_01618e70(&local_18,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x18),0);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))(*(longlong **)(param_1 + 0x30),local_10);
  (**(code **)(**(longlong **)(param_1 + 0x30) + 0x78))(*(longlong **)(param_1 + 0x30),local_18);
  FUN_00414560(&local_18,2);
  return;
}

