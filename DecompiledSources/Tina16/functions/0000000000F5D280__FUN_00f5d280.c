/* Ghidra address: 00f5d280 */
/* Ghidra symbol: FUN_00f5d280 */


int FUN_00f5d280(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  int local_95c;
  undefined1 local_951;
  undefined1 local_950 [684];
  undefined1 local_6a4;
  byte local_6a3;
  undefined8 local_6a0;
  undefined8 local_698;
  
  FUN_00417580(local_950,&DAT_01d0d0b8);
  local_95c = 0;
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x510) = param_3;
  }
  else {
    *(longlong *)(param_1 + 0x518) = param_2;
    *(undefined8 *)(param_1 + 0x510) = *(undefined8 *)(param_2 + 0xa0);
  }
  if (*(longlong *)(param_1 + 0x518) == 0) {
    FUN_00417c40(local_950,PTR_DAT_02004010,&DAT_01d0d0b8);
  }
  else {
    FUN_00417c40(local_950,*(longlong *)(param_1 + 0x518) + 0x5d8,&DAT_01d0d0b8);
  }
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4e0),local_6a0);
  FUN_00b90440(*(undefined8 *)(param_1 + 0x4e8),local_698);
  FUN_0074b490(*(undefined8 *)(param_1 + 0x4f8),(ulonglong)(local_6a3 + 2) % 3);
  (**(code **)(**(longlong **)(param_1 + 0x4f0) + 0x268))(*(longlong **)(param_1 + 0x4f0),local_6a4)
  ;
  if (*(longlong *)(param_1 + 0x510) != 0) {
    cVar1 = FUN_00f5cdb0(*(longlong *)(param_1 + 0x510),&local_951,0);
    if (cVar1 != '\0') {
      local_95c = *(int *)(*(longlong *)(param_1 + 0x500) + 0x94) -
                  *(int *)(*(longlong *)(param_1 + 0x4f0) + 0x94);
      FUN_0064cc50(param_1,*(int *)(param_1 + 0x9c) + local_95c);
      FUN_0064cc50(*(longlong *)(param_1 + 0x4b8),
                   *(int *)(*(longlong *)(param_1 + 0x4b8) + 0x9c) + local_95c);
      FUN_0064dbe0(*(undefined8 *)(param_1 + 0x500),1);
      (**(code **)(**(longlong **)(param_1 + 0x500) + 0x268))
                (*(longlong **)(param_1 + 0x500),local_951);
      goto code_r0x00f5d461;
    }
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x500),0);
code_r0x00f5d461:
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return local_95c;
}

