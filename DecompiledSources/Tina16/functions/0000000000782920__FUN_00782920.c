/* Ghidra address: 00782920 */
/* Ghidra symbol: FUN_00782920 */


void FUN_00782920(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *local_68 [2];
  longlong local_58;
  longlong *local_20;
  
  plVar4 = (longlong *)FUN_00781840();
  if (param_2 != plVar4) {
    if (param_2 == (longlong *)0x0) {
      param_2 = (longlong *)FUN_007810f0();
    }
    else {
      local_58 = DAT_02012590 + 8;
      local_20 = param_2;
      iVar2 = FUN_00596a10(local_58,&local_20);
      if (iVar2 == -1) {
        local_68[0] = param_2;
        FUN_00597e50(DAT_02012590 + 8,local_68);
      }
    }
    DAT_02012550 = param_2;
    DAT_02012570 = (**(code **)(*param_2 + 600))(param_2);
    iVar2 = FUN_00808090();
    iVar6 = 0;
    if (-1 < iVar2 + -1) {
      do {
        uVar5 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
        cVar1 = FUN_0065be20(uVar5);
        if (cVar1 != '\0') {
          uVar5 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
          uVar5 = FUN_0065b870(uVar5);
          iVar3 = thunk_FUN_0419e3da(uVar5);
          if (iVar3 == 0) {
            uVar5 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
            uVar5 = FUN_0065b870(uVar5);
            thunk_FUN_041b2403(uVar5,0xb059,0,0);
          }
          else {
            uVar5 = FUN_00808070(*(undefined8 *)PTR_DAT_02005950,iVar6);
            uVar5 = FUN_0065b870(uVar5);
            thunk_FUN_0413e052(uVar5,0xb059);
          }
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

