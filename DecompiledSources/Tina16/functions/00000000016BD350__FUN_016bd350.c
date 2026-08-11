/* Ghidra address: 016bd350 */
/* Ghidra symbol: FUN_016bd350 */


undefined4
FUN_016bd350(longlong param_1,longlong *param_2,byte *param_3,int param_4,char param_5,
            longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 local_284;
  longlong *local_280;
  longlong local_278;
  longlong local_270;
  longlong local_268;
  longlong local_260 [32];
  undefined8 local_160;
  longlong *local_158;
  longlong local_150;
  longlong local_148;
  longlong local_140 [2];
  undefined8 local_130;
  byte local_128 [264];
  
  local_280 = (longlong *)0x0;
  local_278 = 0;
  local_270 = 0;
  local_268 = 0;
  local_160 = 0;
  local_158 = (longlong *)0x0;
  local_150 = 0;
  local_148 = 0;
  local_140[0] = 0;
  local_130 = 0;
  lVar2 = (ulonglong)*param_3 + 1;
  pbVar4 = local_128;
  for (; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pbVar4 = *param_3;
    param_3 = param_3 + 1;
    pbVar4 = pbVar4 + 1;
  }
  if (param_5 == '\0') {
    iVar3 = 0;
    do {
      iVar1 = (**(code **)(*param_2 + 0x1c8))(param_2);
      if (iVar1 + -1 < iVar3) {
        bVar5 = false;
      }
      else {
        (**(code **)(*param_2 + 0x298))(param_2,local_140,iVar3);
        lVar2 = local_140[0];
        FUN_004169a0(&local_148,local_128);
        if (lVar2 == local_148) {
          bVar5 = true;
        }
        else {
          if (lVar2 != 0) {
            FUN_004169a0(&local_150,local_128);
            if (local_150 != 0) {
              FUN_004169a0(&local_158,local_128);
              iVar1 = FUN_0043e420(lVar2,local_158);
              bVar5 = iVar1 == 0;
              goto code_r0x016bd4a0;
            }
          }
          bVar5 = false;
        }
code_r0x016bd4a0:
        bVar5 = !bVar5;
      }
      if (!bVar5) goto LAB_016bd648;
      iVar3 = iVar3 + 1;
    } while( true );
  }
  if (((param_6 == (longlong *)0x0) || (iVar3 = (**(code **)(*param_6 + 0x28))(param_6), iVar3 < 1))
     || (iVar3 = (**(code **)(*param_6 + 0x28))(param_6), iVar3 <= param_4)) {
    FUN_016a3c50(*(undefined8 *)(param_1 + 0x10),L"No TLD pin defined for the subcircuit pin: ^ .",
                 local_128,0xffffffff);
  }
  else {
    (**(code **)(*param_6 + 0x18))(param_6,&local_160,param_4);
    FUN_00416910(local_260,local_160,0xff);
    FUN_016b92b0(local_128,local_260,1);
  }
  iVar3 = 0;
  do {
    iVar1 = (**(code **)(*param_2 + 0x1c8))(param_2);
    if (iVar1 + -1 < iVar3) {
      bVar5 = false;
    }
    else {
      (**(code **)(*param_2 + 0x298))(param_2,&local_268,iVar3);
      lVar2 = local_268;
      FUN_004169a0(&local_270,local_128);
      if (lVar2 == local_270) {
        bVar5 = true;
      }
      else {
        if (lVar2 != 0) {
          FUN_004169a0(&local_278,local_128);
          if (local_278 != 0) {
            FUN_004169a0(&local_280,local_128);
            iVar1 = FUN_0043e420(lVar2,local_280);
            bVar5 = iVar1 == 0;
            goto code_r0x016bd5f9;
          }
        }
        bVar5 = false;
      }
code_r0x016bd5f9:
      bVar5 = !bVar5;
    }
    if (!bVar5) {
      iVar1 = (**(code **)(*param_2 + 0x1c8))(param_2);
      if ((iVar1 + -1 < iVar3) && (iVar3 = param_4, param_6 != (longlong *)0x0)) {
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x1b,local_128,0xffffffff);
      }
LAB_016bd648:
      iVar1 = (**(code **)(*param_2 + 0x1c8))(param_2);
      if (iVar1 + -1 < iVar3) {
        FUN_016a4020(*(undefined8 *)(param_1 + 0x10),0x1c,local_128,0xffffffff);
      }
      else {
        local_284 = (**(code **)(*param_2 + 0x210))(param_2,iVar3);
      }
      FUN_00414560(&local_280,4);
      FUN_00414560(&local_160,5);
      FUN_00414480(&local_130);
      return local_284;
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

