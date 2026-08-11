/* Ghidra address: 0115c8a0 */
/* Ghidra symbol: FUN_0115c8a0 */


void FUN_0115c8a0(undefined8 param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 *param_7,byte param_8,char param_9
                 ,byte param_10,undefined8 param_11)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 uVar11;
  undefined8 local_res20;
  undefined4 uVar12;
  undefined8 local_9b0;
  undefined8 local_9a8;
  undefined1 local_9a0 [16];
  undefined8 local_990;
  undefined8 local_988;
  undefined8 local_980;
  undefined8 local_978;
  undefined8 local_970;
  longlong local_968;
  undefined8 local_960;
  int local_8a7;
  char local_6ca;
  undefined8 local_192;
  
  local_9b0 = 0;
  local_9a8 = 0;
  local_970 = 0;
  local_978 = 0;
  local_980 = 0;
  local_988 = 0;
  puVar9 = param_7;
  puVar10 = &local_960;
  for (lVar8 = 0x127; lVar8 != 0; lVar8 = lVar8 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar10 = puVar10 + 1;
  }
  local_res20 = param_4;
  FUN_00414610(param_5);
  FUN_00414610(param_6);
  FUN_004179d0(&local_960,&DAT_01d0d0b8);
  if (param_2 == 0) goto LAB_0115ce24;
  FUN_01158fc0(&local_988,param_1);
  uVar4 = FUN_00609e10(param_3);
  local_990 = FUN_00498310(0,0);
  puVar9 = &local_990;
  lVar8 = FUN_01acdf10(&PTR_FUN_01ac9770,1,0,0,uVar4,puVar9,param_1,&local_960);
  FUN_01ae5ef0(lVar8,L"DC transfer");
  local_968 = 0;
  uVar2 = 0;
  uVar4 = local_988;
  local_968 = FUN_01adfeb0(lVar8,param_2,0,0,local_988,(ulonglong)puVar9 & 0xffffffffffffff00,0);
  if (local_968 != 0) {
    uVar4 = local_988;
    FUN_01ae1590(lVar8,param_11,0,0,local_988);
  }
  uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (local_968 == 0) {
    uVar5 = (ulonglong)param_8;
    if (uVar5 < 3) {
      if (uVar5 == 2) {
        FUN_00de8980(&local_970,0x125,param_6);
      }
      else {
        if (uVar5 == 0) goto LAB_0115cae8;
        if (uVar5 == 1) {
          FUN_00de8980(&local_970,0x126,param_6);
        }
      }
    }
    else if (uVar5 - 3 < 2) {
LAB_0115cae8:
      FUN_00de8980(&local_970,0x124,param_6);
    }
    else if (uVar5 - 5 < 2) {
      FUN_00de8980(&local_970,0x123,param_6);
    }
    FUN_00414b50(&local_970,local_192);
    if (local_6ca == '\0') {
      uVar11 = 0;
    }
    else {
      uVar11 = 2;
    }
    if (*(char *)(*(longlong *)(param_2 + 8) + 0x434) == '\0') {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cb8940,1,param_2);
    }
    else {
      uVar6 = FUN_01cc6f70(&PTR_FUN_01cba328,1,param_2);
    }
    FUN_01cc5c60(param_2);
    lVar7 = FUN_01cc5cc0(param_2);
    if ((local_8a7 < 2) && (lVar7 != 0)) {
      FUN_01cc1400(lVar7,&local_978,param_6);
    }
    else {
      FUN_00414b50(&local_978,L"Output");
    }
    uVar4 = CONCAT71((int7)((ulonglong)uVar4 >> 8),uVar11);
    FUN_00f16900(uVar6,param_2,0,local_970,uVar4,1,CONCAT44(uVar2,2),local_978,0,1,2,&local_968,
                 lVar8,1,0);
    uVar12 = (undefined4)((ulonglong)uVar4 >> 0x20);
    (**(code **)(**(longlong **)(lVar8 + 0xd8) + 0x80))
              (*(longlong **)(lVar8 + 0xd8),L"Analysis Result 1",local_968);
    lVar7 = local_968;
    cVar1 = FUN_01ce8540(local_968);
    if ((cVar1 != '\0') || ((param_10 & local_960._3_1_ == '\0') != 0)) {
      uVar2 = FUN_01ce83f0(lVar7);
      FUN_01ce6ab0(lVar7,uVar2,0);
    }
    FUN_01adc0f0(lVar8,0,local_988);
  }
  uVar2 = (**(code **)(*param_3 + 0x60))(param_3);
  uVar3 = (**(code **)(*param_3 + 0x48))(param_3);
  FUN_00498350(local_9a0,0,0,uVar2,CONCAT44(uVar12,uVar3));
  FUN_01acf9e0(lVar8,local_9a0);
  FUN_01ad0490(lVar8);
  FUN_01acfa60(lVar8);
  FUN_00450070(&local_980,param_5,L".wmf",L"_1.wmf",3);
  if (param_9 == '\x01') {
    FUN_01156d70(0,lVar8,local_980,param_3,1);
  }
  else if (param_9 == '\x02') {
    FUN_01156eb0(lVar8,&local_res20,0,0);
  }
  else if (param_9 == '\x03') {
    if (0 < local_8a7) {
      FUN_01ce92d0(local_968,local_980);
    }
  }
  else {
    FUN_004414c0(&local_9a8,local_980,L".tdr");
    FUN_01156430(local_9a8,lVar8);
    FUN_004414c0(&local_9b0,local_980,L".tdr");
    FUN_01158320(param_1,param_2,local_9b0,param_6,&local_960);
  }
  FUN_00410f20(lVar8);
LAB_0115ce24:
  FUN_00414560(&local_9b0,2);
  FUN_00414560(&local_988,4);
  FUN_00417740(&local_960,&DAT_01d0d0b8);
  FUN_00414560(&param_5,2);
  return;
}

