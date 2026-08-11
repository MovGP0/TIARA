/* Ghidra address: 01445bc0 */
/* Ghidra symbol: FUN_01445bc0 */


void FUN_01445bc0(longlong param_1,longlong param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_70 = 0;
  local_78 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40 = 0;
  local_48 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  if (*(char *)(param_2 + 0x92) == '\0') {
    FUN_00efdf60(100.0 / (double)*(int *)(param_2 + 0xb38),param_2);
    if (DAT_0210e4e8 == '\0') {
      FUN_01444f70(param_1,*(double *)(param_1 + 0x100) * 6.283185307179586,param_2);
      FUN_01445050(param_1,*(double *)(param_1 + 0x100) * 6.283185307179586,param_2);
      if ((*(double *)(param_1 + 0x1f8) == 0.0) && (*(double *)(param_1 + 0x200) == 0.0)) {
        FUN_00ef4260(10,param_2);
      }
      else {
        FUN_00c44790(param_1 + 0x208,param_1 + 0x1f8,param_1 + 0x208);
      }
      dVar2 = (double)FUN_0040bcd0(*(double *)(param_1 + 0xf8) * 0.017453292519943295);
      *(double *)(param_1 + 0x1f8) = *(double *)(param_1 + 0x128) * dVar2;
      dVar2 = (double)FUN_0040bdd0(*(double *)(param_1 + 0xf8) * 0.017453292519943295);
      *(double *)(param_1 + 0x200) = *(double *)(param_1 + 0x128) * dVar2;
      FUN_00c44720(param_1 + 0x208,param_1 + 0x1f8,param_1 + 0x1f8);
      FUN_014448e0(*(undefined8 *)(param_1 + 0x100),param_1 + 0x1f8,param_2);
      dVar2 = (double)FUN_00c44590(param_1 + 0x208);
      *(double *)(param_1 + 0x128) = *(double *)(param_1 + 0x128) * dVar2;
      dVar2 = (double)FUN_00c445d0();
      *(double *)(param_1 + 0xf8) = *(double *)(param_1 + 0xf8) + dVar2 * 57.29577951308232;
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x130) + -4);
      }
      if (iVar1 < 1) {
        FUN_00416ba0(&local_18,*(undefined8 *)(param_1 + 0x130),&DAT_014466a4);
        FUN_019b6e50(param_1 + 0x1f0,local_18,param_2);
      }
      else {
        FUN_00416cd0(&local_10,3,&DAT_01446678,*(undefined8 *)(param_1 + 0x130),L",A)*");
        FUN_019b6e50(param_1 + 0x1f0,local_10,param_2);
      }
      dVar2 = (double)FUN_00c44590(param_1 + 0x208);
      if (dVar2 != 1.0) {
        uVar3 = FUN_00c44590(param_1 + 0x208);
        FUN_00efa6e0(&local_20,uVar3,*(undefined1 *)(param_2 + 0xe98));
        FUN_00416ad0(&local_20,&DAT_014466b8);
        FUN_019b6e50(param_1 + 0x1f0,local_20,param_2);
      }
      if (*(char *)(param_2 + 0xe9a) == '\x01') {
        FUN_019b6e50(param_1 + 0x1f0,L"Cos(",param_2);
      }
      else {
        FUN_019b6e50(param_1 + 0x1f0,L"Sin(",param_2);
      }
      if (*(double *)(param_1 + 0x100) / *(double *)(param_1 + 0x118) != 1.0) {
        FUN_00efa6e0(&local_28,*(double *)(param_1 + 0x100) / *(double *)(param_1 + 0x118),
                     *(undefined1 *)(param_2 + 0xe98));
        FUN_00416ad0(&local_28,&DAT_014466b8);
        FUN_019b6e50(param_1 + 0x1f0,local_28,param_2);
      }
      iVar1 = 0;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        iVar1 = *(int *)(*(longlong *)(param_1 + 0x130) + -4);
      }
      if (iVar1 < 1) {
        FUN_00416cd0(&local_38,4,*(undefined8 *)(param_1 + 0x130),L"\\s(w)*t+DegToRad(",
                     *(undefined8 *)(param_1 + 0x130),L"\\s(f))");
        FUN_019b6e50(param_1 + 0x1f0,local_38,param_2);
      }
      else {
        FUN_00416cd0(&local_30,5,&DAT_01446678,*(undefined8 *)(param_1 + 0x130),
                     L",\\s(w))*t+DegToRad(\\i(",*(undefined8 *)(param_1 + 0x130),L",\\s(f)))");
        FUN_019b6e50(param_1 + 0x1f0,local_30,param_2);
      }
      dVar2 = (double)FUN_00c445d0(param_1 + 0x208);
      if (dVar2 != 0.0) {
        dVar2 = (double)FUN_00c445d0(param_1 + 0x208);
        if (dVar2 <= 0.0) {
          dVar2 = (double)FUN_00c445d0(param_1 + 0x208);
          FUN_00efa6e0(&local_50,dVar2 * 57.29577951308232,*(undefined1 *)(param_2 + 0xe98));
          FUN_00416ad0(&local_50,&DAT_014467b0);
          FUN_019b6e50(param_1 + 0x1f0,local_50,param_2);
        }
        else {
          dVar2 = (double)FUN_00c445d0(param_1 + 0x208);
          FUN_00efa6e0(&local_48,dVar2 * 57.29577951308232,*(undefined1 *)(param_2 + 0xe98));
          FUN_00416cd0(&local_40,3,&DAT_014467a0,local_48,&DAT_014467b0);
          FUN_019b6e50(param_1 + 0x1f0,local_40,param_2);
        }
      }
      FUN_019b6e50(param_1 + 0x1f0,&DAT_014467c8,param_2);
      if (*(double *)(param_1 + 0x128) != 1.0) {
        FUN_00efa6e0(&local_58,*(undefined8 *)(param_1 + 0x128),*(undefined1 *)(param_2 + 0xe98));
        FUN_00416ad0(&local_58,&DAT_014466b8);
        FUN_019b6e50(param_1 + 0x1e8,local_58,param_2);
      }
      if (*(char *)(param_2 + 0xe9a) == '\x01') {
        FUN_019b6e50(param_1 + 0x1e8,L"Cos(",param_2);
      }
      else {
        FUN_019b6e50(param_1 + 0x1e8,L"Sin(",param_2);
      }
      if (*(double *)(param_1 + 0x100) / *(double *)(param_1 + 0x118) != 1.0) {
        FUN_00efa6e0(&local_60,*(double *)(param_1 + 0x100) / *(double *)(param_1 + 0x118),
                     *(undefined1 *)(param_2 + 0xe98));
        FUN_00416ad0(&local_60,&DAT_014466b8);
        FUN_019b6e50(param_1 + 0x1e8,local_60,param_2);
      }
      FUN_00efa6e0(&local_68,*(double *)(param_1 + 0x118) * 6.283185307179586,
                   *(undefined1 *)(param_2 + 0xe98));
      FUN_00416ad0(&local_68,&PTR_DAT_014467dc);
      FUN_019b6e50(param_1 + 0x1e8,local_68,param_2);
      if (*(char *)(param_2 + 0xe9a) == '\0') {
        *(double *)(param_1 + 0xf8) = *(double *)(param_1 + 0xf8) + 90.0;
      }
      if (*(double *)(param_1 + 0xf8) != 0.0) {
        if (*(double *)(param_1 + 0xf8) <= 0.0) {
          FUN_00efa6e0(&local_80,*(undefined8 *)(param_1 + 0xf8),*(undefined1 *)(param_2 + 0xe98));
          FUN_00416ad0(&local_80,&DAT_014467b0);
          FUN_019b6e50(param_1 + 0x1e8,local_80,param_2);
        }
        else {
          FUN_00efa6e0(&local_78,*(undefined8 *)(param_1 + 0xf8),*(undefined1 *)(param_2 + 0xe98));
          FUN_00416cd0(&local_70,3,&DAT_014467a0,local_78,&DAT_014467b0);
          FUN_019b6e50(param_1 + 0x1e8,local_70,param_2);
        }
      }
      FUN_019b6e50(param_1 + 0x1e8,&DAT_014467c8,param_2);
      FUN_019b6320(param_1 + 0x1e0);
      FUN_019b6e50(param_1 + 0x1e0,L"\\s(w)=",param_2);
      FUN_00efa6e0(&local_88,*(double *)(param_1 + 0x118) * 6.283185307179586,
                   *(undefined1 *)(param_2 + 0xe98));
      FUN_019b6e50(param_1 + 0x1e0,local_88,param_2);
    }
    else {
      FUN_019b6320(param_1 + 0x1e0);
      FUN_019b6e50(param_1 + 0x1e0,L"\\s(w)=",param_2);
      FUN_00efa6e0(&local_90,*(double *)(param_1 + 0x118) * 6.283185307179586,
                   *(undefined1 *)(param_2 + 0xe98));
      FUN_019b6e50(param_1 + 0x1e0,local_90,param_2);
      FUN_01445120(param_1,*(undefined8 *)(param_1 + 0x100),0,param_2);
    }
  }
  FUN_00414560(&local_90,0x11);
  return;
}

