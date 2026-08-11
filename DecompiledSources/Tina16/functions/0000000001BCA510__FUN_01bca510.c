/* Ghidra address: 01bca510 */
/* Ghidra symbol: FUN_01bca510 */


undefined4
FUN_01bca510(longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5,
            undefined8 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_128 [32];
  undefined8 *local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 local_f0;
  char *local_e8;
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char local_39;
  undefined8 *local_38;
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_20 = 0;
  local_28 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  local_38 = (undefined8 *)0x0;
  local_c4 = 0;
  local_d8 = param_1;
  local_d0 = param_2;
  local_c8 = param_3;
  if (param_2 != 0) {
    cVar1 = FUN_0043e030(param_2,&DAT_01fdf9f0);
    if (cVar1 != '\0') {
      if (local_c8 == 0x28) {
        FUN_0041b840(&local_38,*(undefined8 *)(param_5 + 8));
        uVar3 = FUN_0041b800(&local_30);
        uVar4 = (**(code **)*local_38)(local_38,PTR_DAT_02004870,uVar3);
        if ((uVar4 & 0x80000000) == 0) {
          FUN_0041b800(&local_28);
          uVar2 = (**(code **)(*local_30 + 0x360))(local_30,&local_28);
          FUN_0041d630(uVar2);
          if (local_28 != (longlong *)0x0) {
            FUN_0041b800(&local_20);
            uVar2 = (**(code **)(*local_28 + 0x1a8))(local_28,&local_20);
            FUN_0041d630(uVar2);
            if (local_20 != 0) {
              if (*(longlong *)(local_d8 + 0x848) != 0) {
                FUN_01bca330(auStack_128,&local_60,L"errorLine");
                FUN_01bca330(auStack_128,&local_78,L"errorCharacter");
                FUN_01bca330(auStack_128,&local_90,L"errorMessage");
                FUN_01bca330(auStack_128,&local_a8,L"errorCode");
                FUN_01bca330(auStack_128,&local_c0,L"errorUrl");
                local_108 = &local_90;
                local_100 = &local_a8;
                local_f8 = &local_c0;
                local_f0 = param_6;
                local_e8 = &local_39;
                (**(code **)(local_d8 + 0x848))
                          (*(undefined8 *)(local_d8 + 0x850),local_d8,&local_60,&local_78);
              }
              if (local_39 == '\0') {
                local_c4 = 1;
              }
            }
          }
        }
      }
      else {
        local_c4 = 0x80040100;
      }
      goto code_r0x01bca7ad;
    }
  }
  local_c4 = 0x80040104;
code_r0x01bca7ad:
  FUN_00417840(&local_c0,&DAT_004013f0,5);
  FUN_0041b800(&local_38);
  FUN_0041b800(&local_30);
  FUN_0041b800(&local_28);
  FUN_0041b800(&local_20);
  return local_c4;
}

