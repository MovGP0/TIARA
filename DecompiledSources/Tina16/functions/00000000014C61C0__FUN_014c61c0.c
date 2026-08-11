/* Ghidra address: 014c61c0 */
/* Ghidra symbol: FUN_014c61c0 */


void FUN_014c61c0(undefined8 param_1,char param_2,char param_3,char param_4,undefined8 *param_5,
                 undefined8 *param_6,char *param_7)

{
  char cVar1;
  char cVar2;
  undefined2 uVar3;
  ulonglong uVar4;
  short *psVar5;
  longlong lVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  double dVar10;
  undefined8 in_stack_fffffffffffffad0;
  undefined4 uVar11;
  undefined1 local_4e8 [8];
  undefined8 local_4e0 [79];
  char local_262;
  char local_261;
  undefined8 local_260 [2];
  short local_250 [260];
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  
  uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffad0 >> 0x20);
  local_48 = *param_5;
  local_40 = param_5[1];
  local_38 = (double)param_5[2];
  local_30 = param_5[3];
  puVar9 = local_260;
  for (lVar6 = 0x43; lVar6 != 0; lVar6 = lVar6 + -1) {
    *puVar9 = *param_6;
    param_6 = param_6 + 1;
    puVar9 = puVar9 + 1;
  }
  cVar1 = FUN_00b90600(local_48._4_1_,8,1);
  param_7[0xc] = cVar1;
  param_7[0xd] = local_48._5_1_;
  param_7[0x10] = local_48._6_1_ + -1;
  if ((char)(local_48._6_1_ + -1) == '\x03') {
    param_7[0x10] = '\0';
  }
  *(undefined4 *)(param_7 + 8) = (undefined4)local_48;
  param_7[0xe] = local_48._7_1_;
  param_7[0xf] = (char)local_40;
  param_7[0x310] = (char)local_30;
  param_7[0x318] = '\0';
  param_7[0x319] = '\0';
  param_7[0x31a] = '\0';
  param_7[0x31b] = '\0';
  param_7[0x31c] = '\0';
  param_7[0x31d] = '\0';
  param_7[0x31e] = '\0';
  param_7[799] = '\0';
  param_7[4] = param_2;
  param_7[5] = param_3;
  param_7[6] = param_4;
  cVar1 = FUN_016e9d70(param_1);
  if (param_3 == -1) {
    param_7[5] = '\0';
    cVar1 = cVar1 + -1;
  }
  else {
    param_7[5] = param_3;
  }
  if (param_4 == -1) {
    param_7[6] = '\0';
    cVar1 = cVar1 + -1;
  }
  else {
    param_7[6] = param_4;
  }
  local_262 = cVar1 + '\x01';
  if (local_38 < 1e+29) {
    uVar4 = FUN_016e9e80(param_1,1);
    *param_7 = (char)uVar4;
    if (param_7[5] == '\0') {
      FUN_016ec240(param_1,CONCAT71((int7)((uVar4 & 0xffffffff) >> 8),
                                    (char)(uVar4 & 0xffffffff) + '\x01'),param_7[4],param_7[6]);
      dVar10 = local_38;
      FUN_016ed5d0(param_1,*param_7 + '\x01',0x4014000000000000,0,0,local_38,0);
      uVar11 = (undefined4)((ulonglong)dVar10 >> 0x20);
    }
    else {
      FUN_016ebe60(param_1,CONCAT71((int7)(uVar4 >> 8),(char)uVar4 + '\x01') & 0xffffffff,param_7[5]
                   ,param_7[4],1);
      if (local_38 <= 0.001) {
        dVar10 = 1000.0;
      }
      else {
        dVar10 = 1.0 / local_38;
      }
      FUN_016ed320(param_1,*param_7 + '\x01',0,dVar10,0);
    }
  }
  cVar2 = FUN_016e9f30(param_1);
  local_261 = cVar2 + '\x01';
  iVar8 = 0x14;
  psVar5 = local_250;
  puVar7 = local_4e8;
  do {
    if (*psVar5 == -1) {
      *puVar7 = 0xc;
    }
    else {
      *puVar7 = (char)*psVar5;
      param_7[0xd] = '\x03';
    }
    *(undefined8 *)(puVar7 + 8) = *(undefined8 *)(psVar5 + 1);
    *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(psVar5 + 5);
    *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(psVar5 + 9);
    puVar7 = puVar7 + 0x20;
    psVar5 = psVar5 + 0xd;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  if (param_7[0xd] == 3) {
    FUN_00dd58f0(param_7 + 0x18,param_7[4],param_7[6],&local_261,&local_262,CONCAT44(uVar11,3),
                 param_7[0x10],param_7[0xc],param_7[5],local_260[0],local_260[1],local_4e8);
  }
  else {
    FUN_00dd58f0(param_7 + 0x18,param_7[4],param_7[6],&local_261,&local_262,
                 CONCAT44(uVar11,(uint)(byte)param_7[0xd]),param_7[0x10],param_7[0xc],0,0,0,0);
  }
  FUN_016e9d10(param_1,(local_262 - cVar1) + -1);
  FUN_016e9e80(param_1,(local_261 - cVar2) + -1);
  lVar6 = *(longlong *)(param_7 + 0x18);
  *(char *)(lVar6 + 6) = param_7[0xc];
  (**(code **)(*(longlong *)(lVar6 + 8) + 8))(lVar6,param_1);
  uVar3 = FUN_016ea1b0(param_1,3);
  *(undefined2 *)(param_7 + 2) = uVar3;
  return;
}

