/* Ghidra address: 0161dc40 */
/* Ghidra symbol: FUN_0161dc40 */


undefined8 FUN_0161dc40(undefined8 param_1,longlong param_2,byte param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  local_30 = 0;
  puVar3 = *(undefined4 **)
            (*(longlong *)(*(longlong *)(param_2 + 0x40) + -8 + (ulonglong)param_3 * 8) + 0x10);
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  *param_4 = 1;
  FUN_0043f750(&local_20,param_3);
  FUN_0043f750(&local_28,uVar1);
  FUN_0043f750(&local_30,uVar2);
  FUN_00416cd0(param_1,6,L"Elem: ",local_20,L", i1: ",local_28,L", j1: ",local_30);
  FUN_00414560(&local_30,3);
  return param_1;
}

