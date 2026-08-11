/* Ghidra address: 01c339e0 */
/* Ghidra symbol: FUN_01c339e0 */


bool FUN_01c339e0(byte param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool local_71;
  undefined8 local_70;
  undefined1 local_68 [48];
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  local_70 = 0;
  local_71 = param_1 == 0;
  if (!local_71) {
    iVar4 = 0;
    while (((local_71 == false && (iVar4 < 2)) &&
           (*(longlong *)(&DAT_01fe6168 + (longlong)iVar4 * 8 + (ulonglong)param_1 * 0x20) != 0))) {
      iVar1 = FUN_01c337e0(param_2);
      for (iVar3 = 0; iVar3 < iVar1; iVar3 = iVar3 + 1) {
        FUN_00c411c0(param_2,local_68,iVar3);
        FUN_004169a0(&local_70,local_68);
        FUN_0043e1a0(&local_38,local_70);
        FUN_00416cd0(local_30,3,&DAT_01c33b8c,local_38,&DAT_01c33b8c);
        iVar2 = FUN_004170c0(local_30[0],
                             *(undefined8 *)
                              (&DAT_01fe6168 + (longlong)iVar4 * 8 + (ulonglong)param_1 * 0x20),1);
        if (iVar2 < 1) break;
      }
      local_71 = iVar3 == iVar1;
      iVar4 = iVar4 + 1;
    }
  }
  FUN_00414480(&local_70);
  FUN_00414560(&local_38,2);
  return local_71;
}

