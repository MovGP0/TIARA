/* Ghidra address: 01608560 */
/* Ghidra symbol: FUN_01608560 */


void FUN_01608560(longlong *param_1,int param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  if (param_2 == 2) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608c6c);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608c80);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608c94);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608ca8);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608cbc);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608cd0);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608ce4);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608cf8);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d08);
    }
  }
  else if (param_2 == 4) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      (**(code **)(*param_1 + 0x78))(param_1,L"PINB");
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTB");
      (**(code **)(*param_1 + 0x78))(param_1,L"DDRB");
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d60);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d74);
    }
  }
  else if (param_2 == 1) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d88);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d9c);
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTA");
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTB");
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTC");
      (**(code **)(*param_1 + 0x78))(param_1,L"TRISA");
      (**(code **)(*param_1 + 0x78))(param_1,L"TRISB");
      (**(code **)(*param_1 + 0x78))(param_1,L"TRISC");
    }
  }
  else if (param_2 == 8) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d88);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d9c);
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTA");
      (**(code **)(*param_1 + 0x78))(param_1,L"TRISA");
    }
  }
  else if (param_2 == 0x200) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d9c);
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTA");
      (**(code **)(*param_1 + 0x78))(param_1,L"TRISA");
    }
  }
  else if (param_2 == 0x400) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d9c);
      (**(code **)(*param_1 + 0x78))(param_1,L"PORTA");
      (**(code **)(*param_1 + 0x78))(param_1,L"TRISA");
    }
  }
  else if (param_2 == 0x20) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608cf8);
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608e24);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608e38);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608e4c);
    }
  }
  else if (param_2 == 0x80) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608d88);
    }
  }
  else if (param_2 == 0x10) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,L"RXF2SIDH");
    }
  }
  else if (param_2 == 0x100) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608c80);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608c94);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608ca8);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608e80);
    }
  }
  else if (param_2 == 0x800) {
    iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    if (iVar2 == 0) {
      iVar2 = 0;
      do {
        FUN_0043f750(&local_28,iVar2);
        FUN_00416ba0(local_20,&DAT_01608e94,local_28);
        (**(code **)(*param_1 + 0x78))(param_1,local_20[0]);
        iVar2 = iVar2 + 1;
      } while (iVar2 != 8);
      (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608e38);
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_LAB_01608ea4);
      (**(code **)(*param_1 + 0x78))(param_1,&PTR_DAT_01608c58);
      cVar1 = FUN_01609100(local_res18[0]);
      if (cVar1 == '\0') {
        (**(code **)(*param_1 + 0x78))(param_1,L"CPSR");
      }
      else {
        (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608eb8);
        (**(code **)(*param_1 + 0x78))(param_1,&DAT_01608ecc);
        (**(code **)(*param_1 + 0x78))(param_1,L"xpsr");
      }
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return;
}

