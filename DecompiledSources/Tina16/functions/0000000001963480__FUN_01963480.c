/* Ghidra address: 01963480 */
/* Ghidra symbol: FUN_01963480 */


undefined8 FUN_01963480(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong local_res20;
  undefined1 auStack_e8 [40];
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined2 *local_50;
  undefined8 local_48;
  int local_40;
  char local_39;
  
  local_60 = auStack_e8;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  local_a0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_48 = 0;
  local_50 = (undefined2 *)0x0;
  FUN_00414520(param_2);
  local_39 = '\0';
  local_40 = FUN_00417170(&DAT_01963b00,param_3,1);
  local_res20 = param_4;
  if (local_40 == 0) {
    FUN_00414be0(&local_48,param_3);
  }
  else {
    FUN_00416430(&local_48,param_3,1,local_40 + -1);
    iVar3 = FUN_00414cc0(param_3);
    FUN_00416430(&local_50,param_3,local_40 + 2,(iVar3 - local_40) + -1);
    iVar3 = FUN_00417170(&DAT_01963b0c,local_50,1);
    if (iVar3 == 0) {
      local_res20 = FUN_004b1710(&PTR_FUN_01924cb8,1,0);
      local_39 = '\x01';
      cVar1 = FUN_0043e100(*local_50,&DAT_01963b10);
      if (cVar1 == '\0') {
        cVar1 = FUN_0043e100(*local_50,&DAT_01963b50);
        if (cVar1 == '\0') {
          cVar1 = FUN_0043e100(*local_50,&DAT_01963b70);
          if (cVar1 != '\0') {
            *(undefined1 *)(local_res20 + 0x30) = 3;
          }
        }
        else {
          *(undefined1 *)(local_res20 + 0x30) = 2;
        }
      }
      else {
        *(undefined1 *)(local_res20 + 0x30) = 1;
        iVar3 = FUN_00414cc0(local_50);
        local_40 = 1;
        if (0 < iVar3) {
          do {
            lVar4 = (longlong)local_40;
            cVar1 = FUN_0043e100(local_50[lVar4 + -1],&DAT_01963b30);
            if (cVar1 != '\0') {
              FUN_00416780(local_res20 + 0x18,local_50[lVar4 + -1]);
              local_50[lVar4 + -1] = 0x2e;
            }
            local_40 = local_40 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
      }
      FUN_00416430(&local_68,local_50,2,0xff);
      FUN_004168b0(local_res20 + 0x28,local_68);
    }
    else {
      FUN_00414be0(&local_48,param_3);
    }
  }
  FUN_004168b0(&local_70,local_48);
  iVar3 = FUN_0043e420(local_70,L"TOTALPAGES#");
  if (iVar3 == 0) {
    FUN_00468a10(param_1 + 0x69,L"[TotalPages#]");
  }
  else {
    FUN_004168b0(&local_78,local_48);
    iVar3 = FUN_0043e420(local_78,L"COPYNAME#");
    if (iVar3 == 0) {
      FUN_00468a10(param_1 + 0x69,L"[CopyName#]");
    }
    else {
      cVar1 = FUN_005fcf90(param_1[0xf]);
      if ((cVar1 == '\x01') || (cVar1 = FUN_0195f670(param_1,0xb), cVar1 != '\0')) {
        uVar5 = (**(code **)(*param_1 + 0x118))(param_1);
        FUN_004168b0(&local_c0,local_48);
        FUN_01970cf0(uVar5,&local_b8,local_c0,0);
        FUN_00461840(param_1 + 0x69,&local_b8);
      }
      else {
        uVar5 = (**(code **)(*param_1 + 0x118))(param_1);
        uVar2 = FUN_005fcf90(param_1[0xf]);
        FUN_01807c80(&local_98,local_48,uVar2,0);
        FUN_00416880(&local_a0,local_98);
        FUN_01970cf0(uVar5,&local_90,local_a0,0);
        FUN_00461840(param_1 + 0x69,&local_90);
      }
    }
  }
  cVar1 = FUN_0195f670(param_1,0xf);
  if ((((cVar1 != '\0') && (cVar1 = FUN_0046c3d0(param_1 + 0x69), cVar1 == '\0')) &&
      ((short)param_1[0x69] != 0x100)) &&
     (((short)param_1[0x69] != 8 && ((short)param_1[0x69] != 0x102)))) {
    uVar5 = FUN_00464c60(param_1 + 0x69);
    lVar4 = (**(code **)(*param_1 + 0x118))(param_1);
    cVar1 = FUN_00527160(uVar5,0,*(undefined8 *)(*(longlong *)(lVar4 + 0x1a8) + 0x38));
    if (cVar1 != '\0') {
      FUN_00414520(param_2);
      goto code_r0x019639ca;
    }
  }
  FUN_01963c20(param_1,param_2,param_1 + 0x69,local_res20);
code_r0x019639ca:
  if (local_39 != '\0') {
    FUN_00410f20(local_res20);
  }
  FUN_00414480(&local_c0);
  FUN_00460ba0(&local_b8);
  FUN_00414480(&local_a0);
  FUN_004144d0(&local_98);
  FUN_00460ba0(&local_90);
  FUN_00414560(&local_78,2);
  FUN_00414520(&local_68);
  FUN_004145c0(&local_50,2);
  return param_2;
}

