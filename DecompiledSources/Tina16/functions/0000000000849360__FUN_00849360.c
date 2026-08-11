/* Ghidra address: 00849360 */
/* Ghidra symbol: FUN_00849360 */


void FUN_00849360(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_a8 [4];
  undefined1 local_a4 [4];
  undefined1 local_a0 [7];
  char local_99;
  undefined1 local_98 [112];
  
  lVar2 = 0;
  if (*(short *)(param_2 + 0x10) == 1) {
    cVar1 = (char)param_1[0xaa];
    if ((char)param_1[0xaa] == '\0') {
      FUN_00841d10(param_1,local_98);
      (**(code **)(*param_1 + 0x268))
                (param_1,*(undefined4 *)((longlong)param_1 + 0x504),(int)param_1[0xa1],&local_99,
                 local_a0,local_a4,local_a8,local_98);
      cVar1 = local_99;
    }
    local_99 = cVar1;
    if (local_99 == '\x02') {
      lVar2 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,0xfffffff1);
    }
    else if (local_99 == '\x03') {
      lVar2 = FUN_00808880(*(undefined8 *)PTR_DAT_02005950,0xfffffff2);
    }
  }
  if (lVar2 == 0) {
    FUN_006587d0(param_1,param_2);
  }
  else {
    thunk_FUN_04176eb1(lVar2);
  }
  return;
}

