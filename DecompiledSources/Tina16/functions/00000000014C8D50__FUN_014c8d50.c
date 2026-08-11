/* Ghidra address: 014c8d50 */
/* Ghidra symbol: FUN_014c8d50 */


undefined1 FUN_014c8d50(longlong param_1,char param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  undefined1 local_6d;
  int local_6c;
  int local_68;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  
  local_40 = 0;
  local_48 = 0;
  local_50 = 0;
  local_6d = 0;
  local_68 = *(int *)(param_1 + 0x2e4);
  local_6c = 1;
  if (0 < local_68) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + -8 + (longlong)local_6c * 8);
      lVar2 = *(longlong *)(lVar1 + 0x60);
      FUN_016eebe0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 3,0);
      cVar3 = FUN_0040c770();
      FUN_016eebe0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 1,0);
      cVar4 = FUN_0040c770();
      if (param_2 == '\x06') {
        FUN_016eebe0(lVar1,param_1 + 0x1b8,1,*(short *)(lVar2 + 2) + 1,0);
        cVar5 = FUN_0040c770();
      }
      else {
        FUN_016eebe0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 2,0);
        cVar5 = FUN_0040c770();
      }
      if ((cVar3 != '\0') && (*(char *)(lVar2 + 0x19) == '\x01')) {
        uVar7 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
        _AA_interface(uVar7,*(undefined4 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10));
      }
      if (*(char *)(lVar2 + 0x19) == '\x02') {
        FUN_016eebe0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 3,0);
        cVar3 = FUN_0040c770();
        if (cVar3 != '\0') {
          uVar7 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
          _AD_interface2_real(uVar7,*(undefined4 *)(lVar2 + 8),*(undefined8 *)(lVar2 + 0x10),param_3
                             );
        }
      }
      else if ((param_4 != '\0') || (cVar4 != cVar5)) {
        local_6d = 1;
        FUN_016eeca0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 2,(double)(int)cVar4,0);
        FUN_016eebe0(lVar1,param_1 + 0x1b8,0,*(short *)(lVar2 + 2) + 3,0);
        cVar3 = FUN_0040c770();
        if (cVar3 != '\0') {
          uVar7 = FUN_00b92140(0);
          if (*(char *)(lVar2 + 0x19) == '\x03') {
            uVar8 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            _XMC_ACMP_SetEvent(uVar8,*(undefined4 *)(lVar2 + 8));
          }
          else if (*(int *)(lVar2 + 8) < 0) {
            lVar1 = *(longlong *)(lVar1 + 0x128);
            FUN_00414b50(&local_50,*(undefined8 *)(lVar1 + 0x580));
            uVar6 = FUN_0043fc00(*(undefined8 *)(lVar1 + 0x590));
            uVar8 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            uVar9 = FUN_014cdd30(*(undefined8 *)(param_1 + 0xe8));
            uVar9 = FUN_00442620(uVar9,local_50);
            _AD_interface2ProcessName(uVar8,uVar9,uVar6,cVar4,param_3);
          }
          else {
            uVar8 = FUN_014cdce0(*(undefined8 *)(param_1 + 0xe8));
            _AD_interface2(uVar8,*(undefined4 *)(lVar2 + 8),cVar4,param_3);
          }
          dVar10 = (double)FUN_00b92140(uVar7);
          *(double *)PTR_DAT_02001f58 = dVar10 + *(double *)PTR_DAT_02001f58;
        }
      }
      local_6c = local_6c + 1;
      local_68 = local_68 + -1;
    } while (local_68 != 0);
  }
  FUN_00414560(&local_50,3);
  return local_6d;
}

