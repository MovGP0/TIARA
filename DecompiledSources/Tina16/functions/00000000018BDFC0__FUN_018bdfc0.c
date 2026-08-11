/* Ghidra address: 018bdfc0 */
/* Ghidra symbol: FUN_018bdfc0 */


int FUN_018bdfc0(longlong param_1,int param_2)

{
  int iVar1;
  int local_24;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_24 = -1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0));
  if ((iVar1 < 1) ||
     (iVar1 = (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x28))(*(longlong **)(param_1 + 0xa0)),
     iVar1 <= param_2)) {
    if ((param_2 < *(int *)(param_1 + 0x9c)) && (-1 < param_2)) {
      local_24 = param_2;
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0xa0) + 0x18))
              (*(longlong **)(param_1 + 0xa0),local_20,param_2);
    local_24 = FUN_0043fc00(local_20[0]);
    local_24 = local_24 + -1;
    if ((local_24 < 0) ||
       (iVar1 = (**(code **)**(undefined8 **)(param_1 + 0xd0))(*(undefined8 **)(param_1 + 0xd0)),
       iVar1 < local_24)) {
      local_24 = -1;
    }
  }
  FUN_00414480(local_20);
  return local_24;
}

