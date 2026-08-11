/* Ghidra address: 00649a90 */
/* Ghidra symbol: FUN_00649a90 */


longlong FUN_00649a90(undefined8 *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [32];
  char *local_78;
  longlong local_60;
  undefined1 local_50 [16];
  longlong *local_40;
  undefined8 local_34;
  char local_29 [9];
  
  local_34 = *param_1;
  local_60 = 0;
  if ((DAT_02012338 != 0) &&
     (uVar3 = thunk_FUN_040bd713(0x11),
     (bool)*(char *)(*(longlong *)PTR_DAT_02004030 + 0x178) != ((uVar3 & 0x8000) != 0))) {
    (**(code **)(*DAT_02012340 + 0x10))(DAT_02012340);
    iVar7 = *(int *)(DAT_02012338 + 0x10);
    iVar6 = 0;
    if (-1 < iVar7 + -1) {
      do {
        local_40 = (longlong *)FUN_004aeac0(DAT_02012338,iVar6);
        if (((local_40 != param_2) && (*(char *)((longlong)local_40 + 0x391) != '\0')) &&
           (cVar1 = (**(code **)(*local_40 + 0xf0))(local_40), cVar1 != '\0')) {
          uVar4 = FUN_0065b870(local_40);
          iVar2 = thunk_FUN_0419e3da(uVar4);
          if ((iVar2 != 0) && (cVar1 = FUN_00649a30(auStack_98), cVar1 == '\0')) {
            pcVar5 = (code *)FUN_00411550(local_40,0xffb8);
            cVar1 = (*pcVar5)(local_40,param_2);
            if (cVar1 != '\0') {
              local_29[0] = '\x01';
              pcVar5 = (code *)FUN_00411550(local_40,0xffb9);
              local_78 = local_29;
              (*pcVar5)(local_40,param_2,local_50,&local_34);
              if ((local_29[0] != '\0') && (cVar1 = FUN_00423210(local_50,&local_34), cVar1 != '\0')
                 ) {
                FUN_00648cd0(DAT_02012340,local_40);
              }
            }
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    if (0 < (int)DAT_02012340[2]) {
      local_60 = FUN_00648dd0(DAT_02012340);
    }
    if ((local_60 != 0) && (cVar1 = FUN_00649850(auStack_98,local_60), cVar1 == '\0')) {
      local_60 = 0;
    }
  }
  return local_60;
}

