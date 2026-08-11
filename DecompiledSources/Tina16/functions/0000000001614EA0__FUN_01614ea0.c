/* Ghidra address: 01614ea0 */
/* Ghidra symbol: FUN_01614ea0 */


undefined8 FUN_01614ea0(undefined8 param_1,byte param_2)

{
  undefined8 local_10;
  
  local_10 = 0;
  if (param_2 < 0x1d) {
    if (param_2 == 0x1c) {
      FUN_00414b50(&local_10,&PTR_DAT_01615498);
      goto LAB_0161520b;
    }
    if (param_2 < 0x12) {
      if (param_2 == 0x11) {
        FUN_00414b50(&local_10,L"PUSH");
        goto LAB_0161520b;
      }
      if (param_2 < 6) {
        if (param_2 == 5) {
          FUN_00414b50(&local_10,L"OBJECT_ASSIGN");
          goto LAB_0161520b;
        }
        if (param_2 == 1) {
          FUN_00414b50(&local_10,L"ASSIGN_SIGNAL");
          goto LAB_0161520b;
        }
        if (param_2 == 3) {
          FUN_00414b50(&local_10,L"VARIABLE_ASSIGN");
          goto LAB_0161520b;
        }
      }
      else {
        if (param_2 == 0xd) {
          FUN_00414b50(&local_10,L"UNARY_OPERATOR");
          goto LAB_0161520b;
        }
        if (param_2 == 0xe) {
          FUN_00414b50(&local_10,L"BINARY_OPERATOR");
          goto LAB_0161520b;
        }
      }
    }
    else if (param_2 < 0x1a) {
      if (param_2 == 0x19) {
        FUN_00414b50(&local_10,&PTR_DAT_0161545c);
        goto LAB_0161520b;
      }
      if (param_2 == 0x16) {
        FUN_00414b50(&local_10,L"GOFALSE");
        goto LAB_0161520b;
      }
      if (param_2 == 0x18) {
        FUN_00414b50(&local_10,&DAT_0161541c);
        goto LAB_0161520b;
      }
    }
    else {
      if (param_2 == 0x1a) {
        FUN_00414b50(&local_10,&PTR_DAT_01615470);
        goto LAB_0161520b;
      }
      if (param_2 == 0x1b) {
        FUN_00414b50(&local_10,&PTR_DAT_01615484);
        goto LAB_0161520b;
      }
    }
  }
  else if (param_2 < 0x36) {
    if (param_2 == 0x35) {
      FUN_00414b50(&local_10,L"BUILT_IN_FN");
      goto LAB_0161520b;
    }
    if (param_2 < 0x33) {
      if (param_2 == 0x32) {
        FUN_00414b50(&local_10,L"GET_VOLTAGE");
        goto LAB_0161520b;
      }
      if (param_2 == 0x1d) {
        FUN_00414b50(&local_10,L"SET_STATUS");
        goto LAB_0161520b;
      }
      if (param_2 == 0x31) {
        FUN_00414b50(&local_10,L"SET_VOLTAGE");
        goto LAB_0161520b;
      }
    }
    else {
      if (param_2 == 0x33) {
        FUN_00414b50(&local_10,L"SET_CURRENT");
        goto LAB_0161520b;
      }
      if (param_2 == 0x34) {
        FUN_00414b50(&local_10,L"GET_CURRENT");
        goto LAB_0161520b;
      }
    }
  }
  else if (param_2 < 0x4b) {
    if (param_2 == 0x4a) {
      FUN_00414b50(&local_10,&DAT_01615448);
      goto LAB_0161520b;
    }
    if (param_2 == 0x37) {
      FUN_00414b50(&local_10,L"SELECT_COMPLEX_READ");
      goto LAB_0161520b;
    }
    if (param_2 == 0x3b) {
      FUN_00414b50(&local_10,L"SELECT_ARRAY_INDEX");
      goto LAB_0161520b;
    }
  }
  else {
    if (param_2 == 0x4b) {
      FUN_00414b50(&local_10,L"BLOCK_BEGIN");
      goto LAB_0161520b;
    }
    if (param_2 == 0x4c) {
      FUN_00414b50(&local_10,L"BLOCK_END");
      goto LAB_0161520b;
    }
  }
  FUN_00414b50(&local_10,L"<not found>");
LAB_0161520b:
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  return param_1;
}

