/* Ghidra address: 008a28d0 */
/* Ghidra symbol: FUN_008a28d0 */


double FUN_008a28d0(undefined8 param_1)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  undefined8 local_res8 [4];
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_58;
  int local_54;
  double local_50;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  undefined2 local_40;
  undefined2 local_3c;
  undefined2 local_38;
  undefined2 local_34;
  undefined2 local_30;
  undefined2 local_2c;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_res8[0] = param_1;
  FUN_00414610(param_1);
  local_41 = '\0';
  local_42 = '\0';
  local_43 = '\0';
  local_44 = '\0';
  local_58 = 0;
  do {
    local_54 = FUN_008b04e0(L"\t !\"#$%&\'()*+,-./;<=>?@[\\]^_`{|}~",local_res8[0],0xffffffff,
                            local_58 + 1);
    if (local_54 == 0) {
code_r0x008a29ce:
      if ((((local_42 == '\0') || (local_43 == '\0')) || (local_44 == '\0')) || (local_41 == '\0'))
      {
        uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid Cookie Date format");
        FUN_004134c0(uVar1);
      }
      dVar2 = (double)FUN_00448c80(local_40,local_3c,local_38);
      dVar3 = (double)FUN_00448a90(local_2c,local_30,local_34,0);
      local_50 = (double)FUN_008779a0();
      local_50 = dVar2 + dVar3 + local_50;
      FUN_00414560(&local_70,2);
      FUN_00414480(local_res8);
      return local_50;
    }
    local_58 = FUN_008b0400(L"\t !\"#$%&\'()*+,-./;<=>?@[\\]^_`{|}~",local_res8[0],0xffffffff,
                            local_54 + 1);
    if (local_58 == 0) {
      FUN_00416dc0(&local_68,local_res8[0],local_54,0x7fffffff);
      FUN_008a2840(auStack_98,local_68);
      goto code_r0x008a29ce;
    }
    FUN_00416dc0(&local_70,local_res8[0],local_54,local_58 - local_54);
    FUN_008a2840(auStack_98,local_70);
  } while( true );
}

