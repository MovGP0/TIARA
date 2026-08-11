/* Ghidra address: 014c59b0 */
/* Ghidra symbol: FUN_014c59b0 */


void FUN_014c59b0(undefined8 param_1,char param_2,char param_3,char param_4,undefined8 *param_5,
                 char *param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  char cVar4;
  undefined2 uVar5;
  ulonglong uVar6;
  double dVar7;
  undefined8 in_stack_ffffffffffffff60;
  undefined4 uVar8;
  char local_4a;
  char local_49;
  undefined8 local_48;
  undefined8 local_40;
  double local_38;
  undefined8 local_30;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffff60 >> 0x20);
  local_40 = param_5[1];
  local_38 = (double)param_5[2];
  local_30 = param_5[3];
  local_48._4_1_ = (undefined1)((ulonglong)*param_5 >> 0x20);
  uVar2 = local_48._4_1_;
  local_48 = *param_5;
  cVar3 = FUN_00b90600(uVar2,8,1);
  param_6[0xc] = cVar3;
  param_6[0xd] = local_48._5_1_;
  param_6[0x10] = local_48._6_1_ + -1;
  if ((char)(local_48._6_1_ + -1) == '\x03') {
    param_6[0x10] = '\0';
  }
  *(undefined4 *)(param_6 + 8) = (undefined4)local_48;
  param_6[0xe] = local_48._7_1_;
  param_6[0xf] = (char)local_40;
  param_6[0x310] = (char)local_30;
  param_6[0x318] = '\0';
  param_6[0x319] = '\0';
  param_6[0x31a] = '\0';
  param_6[0x31b] = '\0';
  param_6[0x31c] = '\0';
  param_6[0x31d] = '\0';
  param_6[0x31e] = '\0';
  param_6[799] = '\0';
  param_6[4] = param_2;
  param_6[5] = param_3;
  param_6[6] = param_4;
  cVar3 = FUN_016e9d70(param_1);
  if (param_3 == -1) {
    param_6[5] = '\0';
    cVar3 = cVar3 + -1;
  }
  else {
    param_6[5] = param_3;
  }
  if (param_4 == -1) {
    param_6[6] = '\0';
    cVar3 = cVar3 + -1;
  }
  else {
    param_6[6] = param_4;
  }
  cVar3 = cVar3 + '\x01';
  local_4a = cVar3;
  if (local_38 < 1e+29) {
    uVar6 = FUN_016e9e80(param_1,1);
    *param_6 = (char)uVar6;
    if (param_6[5] == '\0') {
      FUN_016ec240(param_1,CONCAT71((int7)((uVar6 & 0xffffffff) >> 8),
                                    (char)(uVar6 & 0xffffffff) + '\x01'),param_6[4],param_6[6]);
      dVar7 = local_38;
      FUN_016ed5d0(param_1,*param_6 + '\x01',0x4014000000000000,0,0,local_38,0);
      uVar8 = (undefined4)((ulonglong)dVar7 >> 0x20);
    }
    else {
      FUN_016ebe60(param_1,CONCAT71((int7)(uVar6 >> 8),(char)uVar6 + '\x01') & 0xffffffff,param_6[5]
                   ,param_6[4],1);
      if (local_38 <= 0.001) {
        dVar7 = 1000.0;
      }
      else {
        dVar7 = 1.0 / local_38;
      }
      FUN_016ed320(param_1,*param_6 + '\x01',0,dVar7,0);
    }
  }
  cVar4 = FUN_016e9f30(param_1);
  local_49 = cVar4 + '\x01';
  FUN_00dd58f0(param_6 + 0x18,param_6[4],param_6[6],&local_49,&local_4a,
               CONCAT44(uVar8,(uint)(byte)param_6[0xd]),param_6[0x10],1,0,0,0,0);
  FUN_016e9d10(param_1,local_4a - cVar3);
  FUN_016e9e80(param_1,local_49 - (cVar4 + '\x01'));
  lVar1 = *(longlong *)(param_6 + 0x18);
  *(char *)(lVar1 + 6) = param_6[0xc];
  (**(code **)(*(longlong *)(lVar1 + 8) + 8))(lVar1,param_1);
  uVar5 = FUN_016ea1b0(param_1,3);
  *(undefined2 *)(param_6 + 2) = uVar5;
  return;
}

