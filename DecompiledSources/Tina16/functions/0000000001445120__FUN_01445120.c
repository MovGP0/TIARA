/* Ghidra address: 01445120 */
/* Ghidra symbol: FUN_01445120 */


/* WARNING: Type propagation algorithm not settling */

void FUN_01445120(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_res18 [2];
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
  longlong local_18 [2];
  
  local_78 = 0;
  local_80 = 0;
  local_70 = 0;
  local_60 = 0;
  local_68 = 0;
  local_50 = 0;
  local_58 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_18[1] = 0;
  local_18[0] = 0;
  cVar1 = FUN_019b6200(*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(param_4 + 0xc0),param_4);
  if (((cVar1 == '\0') &&
      (cVar1 = FUN_019b6120(*(undefined8 *)(param_4 + 0xc0),&DAT_0144594c,param_4), cVar1 == '\0'))
     && (cVar1 = FUN_019b6120(*(undefined8 *)(param_4 + 0xc0),&DAT_0144595c,param_4), cVar1 == '\0')
     ) {
    FUN_019b6e50(local_18,&DAT_01445970,param_4);
    FUN_019b6f10(local_18,*(undefined8 *)(param_4 + 0xb8),param_4);
    FUN_019b6e50(local_18,&DAT_01445984,param_4);
    FUN_019b6f10(local_18,*(undefined8 *)(param_4 + 0xc0),param_4);
    FUN_019b6e50(local_18,&DAT_01445994,param_4);
  }
  else {
    cVar1 = FUN_019b6200(*(undefined8 *)(param_4 + 0xb8),*(undefined8 *)(param_4 + 0xc0),param_4);
    if (cVar1 == '\0') {
      FUN_019b6f10(local_18,*(undefined8 *)(param_4 + 0xb8),param_4);
    }
  }
  iVar2 = FUN_00416db0(local_res18[0],&DAT_014459a4);
  if (iVar2 == 0) {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x130) + -4);
    }
    if (iVar2 < 1) {
      FUN_00416ba0(&local_28,*(undefined8 *)(param_1 + 0x130),&DAT_014459a4);
      FUN_019b6e50(local_18 + 1,local_28,param_4);
    }
    else {
      FUN_00416cd0(&local_20,3,&DAT_014459b8,*(undefined8 *)(param_1 + 0x130),L",dc)");
      FUN_019b6e50(local_18 + 1,local_20,param_4);
    }
    if (local_18[0] != 0) {
      FUN_019b6e50(local_18 + 1,&DAT_014459e4,param_4);
      FUN_019b6f10(local_18 + 1,local_18[0],param_4);
    }
  }
  else {
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x130) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x130) + -4);
    }
    if (iVar2 < 1) {
      FUN_00416ba0(&local_38,*(undefined8 *)(param_1 + 0x130),&DAT_01445a08);
      FUN_019b6e50(local_18 + 1,local_38,param_4);
    }
    else {
      FUN_00416cd0(&local_30,3,&DAT_014459b8,*(undefined8 *)(param_1 + 0x130),&DAT_014459f4);
      FUN_019b6e50(local_18 + 1,local_30,param_4);
    }
    if (local_18[0] != 0) {
      FUN_019b6e50(local_18 + 1,L"*Abs( ",param_4);
      FUN_019b6f10(local_18 + 1,local_18[0],param_4);
      FUN_019b6e50(local_18 + 1,&DAT_01445a34,param_4);
    }
    if (*(char *)(param_4 + 0xe9a) == '\x01') {
      FUN_019b6e50(local_18 + 1,L"*Cos(",param_4);
    }
    else {
      FUN_019b6e50(local_18 + 1,L"*Sin(",param_4);
    }
    if (*(double *)(param_1 + 0x118) == *(double *)(param_1 + 0x110)) {
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x130) + -4);
      }
      if (iVar2 < 1) {
        FUN_00416cd0(&local_48,4,*(undefined8 *)(param_1 + 0x130),L"\\s(w)*t+DegToRad(",
                     *(undefined8 *)(param_1 + 0x130),L"\\s(f))");
        FUN_019b6e50(local_18 + 1,local_48,param_4);
      }
      else {
        FUN_00416cd0(&local_40,5,&DAT_014459b8,*(undefined8 *)(param_1 + 0x130),
                     L",\\s(w))*t+DegToRad(\\i(",*(undefined8 *)(param_1 + 0x130),L",\\s(f)))");
        FUN_019b6e50(local_18 + 1,local_40,param_4);
      }
    }
    else {
      iVar2 = 0;
      if (*(longlong *)(param_1 + 0x130) != 0) {
        iVar2 = *(int *)(*(longlong *)(param_1 + 0x130) + -4);
      }
      if (iVar2 < 1) {
        uVar3 = FUN_0040c770(*(double *)(param_1 + 0x110) / *(double *)(param_1 + 0x118));
        FUN_0043f780(&local_68,uVar3);
        FUN_00416cd0(&local_60,6,local_68,&DAT_014459e4,*(undefined8 *)(param_1 + 0x130),
                     L"\\s(w)*t+DegToRad(",*(undefined8 *)(param_1 + 0x130),L"\\s(f))");
        FUN_019b6e50(local_18 + 1,local_60,param_4);
      }
      else {
        uVar3 = FUN_0040c770(*(double *)(param_1 + 0x110) / *(double *)(param_1 + 0x118));
        FUN_0043f780(&local_58,uVar3);
        FUN_00416cd0(&local_50,6,local_58,L"*\\i(",*(undefined8 *)(param_1 + 0x130),
                     L",\\s(w))*t+DegToRad(\\i(",*(undefined8 *)(param_1 + 0x130),L",\\s(f)))");
        FUN_019b6e50(local_18 + 1,local_50,param_4);
      }
    }
    if (local_18[0] != 0) {
      FUN_019b6e50(local_18 + 1,L"+Arc( ",param_4);
      FUN_019b6f10(local_18 + 1,local_18[0],param_4);
      FUN_019b6e50(local_18 + 1,&DAT_01445a34,param_4);
    }
    FUN_019b6e50(local_18 + 1,&DAT_01445994,param_4);
  }
  if (*(double *)(param_1 + 0x118) == *(double *)(param_1 + 0x110)) {
    FUN_00416cd0(&local_70,3,L"(j*\\i(",*(undefined8 *)(param_1 + 0x108),L",\\s(w)))");
    FUN_019b6360(local_18 + 1,&DAT_01445b54,local_70,param_4);
  }
  else {
    uVar3 = FUN_0040c770(*(double *)(param_1 + 0x110) / *(double *)(param_1 + 0x118));
    FUN_0043f780(&local_80,uVar3);
    FUN_00416cd0(&local_78,5,&DAT_01445ba0,local_80,L"*j*\\i(",*(undefined8 *)(param_1 + 0x108),
                 L",\\s(w)))");
    FUN_019b6360(local_18 + 1,&DAT_01445b54,local_78,param_4);
  }
  FUN_01444c00(param_1,local_18 + 1,param_1 + 0x218,param_2,param_4);
  FUN_019b6320(local_18 + 1);
  FUN_019b6320(local_18);
  FUN_00414560(&local_80,0xd);
  FUN_00414480(local_res18);
  return;
}

